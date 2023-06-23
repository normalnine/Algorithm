#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    bool judgment = false;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
           if(judgment && i%2==1)
           {
               judgment = false;
           }
           else if (!judgment && i%2==0)
           {
               judgment = true;
           }
            continue;
        }
        
        if(judgment)
        {
            if(i%2==1 && s[i]>='a')
            {
                s[i]-=32;
            }    
            else if(i%2==0 && s[i]<'a')
            {
                s[i]+=32;
            }
        }
        else
        {
            if(i%2==0 && s[i]>='a')
            {
                s[i]-=32;
            }    
            else if(i%2==1 && s[i]<'a')
            {
                s[i]+=32;
            }
        }
    }
    
    cout<<s<<endl;
    
    return s;
}