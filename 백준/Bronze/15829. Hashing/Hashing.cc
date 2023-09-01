#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    char s[51];
    long long h = 0, r=1, m = 1234567891;
    
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        h += ((s[i]-96) * r) % m;
        r =  r * 31 % m;
    }
    
    cout<<h;
    
    return 0;
}
