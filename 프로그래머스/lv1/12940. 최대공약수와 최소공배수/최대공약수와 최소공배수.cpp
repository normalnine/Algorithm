#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int max = 0;
    int min = 0;
    
    for(int i = 1; i<=n; i++)
    {        
        if(n%i == 0 && m%i ==0)
        {
            max = i;
            min = i*(n/i)*(m/i);
        }
    }
    
    
    
    answer.push_back(max);
    answer.push_back(min);
    
    return answer;
}