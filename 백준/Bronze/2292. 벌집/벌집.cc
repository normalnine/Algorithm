#include <iostream>

using namespace std;

int main()
{
    int n;
    int i=1;
    int j=2;
    
    cin>>n;
    
    if(n==1)
    {
        cout<<i;
        
        return 0;
    }
    
    while(true)
    {
        for(int k=0; k<i*6; k++)
        {
            
            if(j==n)
            {
                cout<<i+1;
                
                return 0;
            }
            j++;
        }
        i++;
    }
    
    return 0;
}