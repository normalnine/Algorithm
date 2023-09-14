#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long f= 1;
    
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        f*=i;
    }
    
    cout<<f;
    
    return 0;
}
