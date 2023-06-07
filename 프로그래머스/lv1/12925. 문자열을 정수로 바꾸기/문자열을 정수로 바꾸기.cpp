#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= '0')
        {
            answer += s[i] - 48;
            if(i<s.size()-1)
            {
                answer*=10;
            }
            
        }
    }
    
    if(s[0] == '-')
    {
        answer*=-1;
    }
    
    return answer;
}