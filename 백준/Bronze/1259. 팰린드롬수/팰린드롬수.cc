#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    
    
    while(true)
    {
        cin>>s;
        
        if(s == "0")
        {
            break;
        }
        
        int eqaul = 0;
        
        for(int i=0; i<s.length()/2; i++)
        {
            
            if(s[i] != s[s.length()-1-i])
            {
                eqaul++;
                break;
            }
        }
        
        if(eqaul == 0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    
    }
    
    return 0;
}
