#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    char s[51];
    long long h = 0;
    
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        h += (s[i]-96) * pow(31, i);
    }
    
    cout<<h;
    
    return 0;
}