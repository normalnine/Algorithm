#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    char m = (char)n;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        else if(s[i]>='a' && s[i] <= 'z' && s[i]+m > 'z')
        {
            s[i] = s[i] + m -'z'+'`';
        }
        else if(s[i]>='A' && s[i] <= 'Z' && s[i]+m > 'Z')
        {
            s[i] = s[i] + m -'z'+'`';
        }
        else
        {
            s[i]+=m;
        }
    }
    
    return s;
}