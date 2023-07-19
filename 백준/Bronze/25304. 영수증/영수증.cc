#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    long long X;
    int N;
    int a,b,sum =0;
    cin>>X;
    cin>>N;
   
    
    for(int i = 0; i<N; i++)
    {
        cin>>a>>b;
        
        sum+=a*b;
    }
    
    if(sum == X)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    return 0;
}
