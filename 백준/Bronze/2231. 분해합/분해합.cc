#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int j=i;
        int sum=i;
        
        while(j>0)
        {
            sum+=j%10;
            j/=10;
        }
        
        if(n==sum)
        {
            cout<<i;
            return 0;
        }
    }
    
    cout<<0;

    return 0;
}
