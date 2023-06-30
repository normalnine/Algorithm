#include <string>
#include <vector>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> v;
    int temp;
    
    while(n>0)
    {
        v.push_back(n%10);
        n/=10;
    }
    
    for(long long i = 0; i < v.size(); i++)
    {
        for(long long j = i+1; j<v.size(); j++)
        {
            if(v[i]<v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    answer+=v[0];
    
    for(long long i = 1; i<v.size(); i++)
    {
        answer*=10;
        answer+=v[i];
    }
    return answer;
}