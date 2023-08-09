#include<iostream>
using namespace std;

int main()
{
    int a, b =0;
    int count = 0;
    
    cin>>count;
    
    for(int i = 0; i<count; i++)
    {
        cin>>a>>b;
        cout<<"Case #"<<i+1<<": "<<a+b<<endl;
    }  
    return 0;
}
