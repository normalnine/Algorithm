#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    while(1)
    {
        cin>>a>>b>>c;
        
        if(a== 0 && b== 0 && c==0)
        {
            return 0;
        }
        
        
        if(a>c)
        {
            int temp = c;
            c = a;
            a = temp;
        }
        
        if(b>c)
        {
            int temp = c;
            c = b;
            b = temp;
        }
        
        if(a*a+b*b == c*c)
        {
            cout<<"right\n";
        }
        else
        {
          cout<<"wrong\n";
        }

    }
    
    return 0;
}
