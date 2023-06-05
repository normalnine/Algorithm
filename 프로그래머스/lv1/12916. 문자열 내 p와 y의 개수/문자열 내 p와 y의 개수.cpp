#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count = 0;

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] =='P' || s[i]=='p')
        {
            count++;
        }
        else if(s[i] =='Y' || s[i]=='y')
        {
            count--;
        }
    }
    
    if(count == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    
    return answer;
}