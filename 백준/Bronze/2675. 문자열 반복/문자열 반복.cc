#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, t;
    string s;
    
    cin>>t;
    
    while(t>0)
    {
        cin>>n;
        cin>>s;
    
        for(int i=0; i<s.length(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
        t--;
    }
    return 0;    
}