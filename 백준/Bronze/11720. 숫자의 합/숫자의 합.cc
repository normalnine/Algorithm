#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n = 0;
    int sum = 0;
    string arr;
    
    cin>>n>>arr;
    
    for(int i=0; i<n; i++)
    {
        sum += (int)arr[i]-48;
    }
    
    cout<<sum;
    
    return 0;
}