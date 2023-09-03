#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    int max, min;
    
    cin>>a>>b;
    
    if(a>b)
    {
        for(int i = b; i>0; i--)
        {
            if(a%i==0 && b%i==0)
            {
                max = i;
                break;
            }
        }
    }
    else
    {
        for(int i = a; i>0; i--)
        {
            if(a%i==0 && b%i==0)
            {
                max = i;
                break;
            }
        }   
    }
    
    for(int i=1; ; i++)
    {
        if((a*i)%b == 0)
        {
            min = a*i;
            break;
        }
    }
    
    cout<<max<<endl;
    cout<<min;
    
    return 0;
}
