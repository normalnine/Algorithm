#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string s;
    
    for(long long i=0; i<=t.size()-p.size(); i++)
    {
        s = t.substr(i, p.size());
        if(stol(s) <= stol(p))
        {
           answer++;
        }
    }
    
    
    
    return answer;
}