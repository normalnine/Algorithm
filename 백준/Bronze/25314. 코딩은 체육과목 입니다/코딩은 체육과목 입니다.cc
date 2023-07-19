#include<iostream>
using namespace std;

int main()
{
    int bytes;
    
    cin>>bytes;
    
    for(int i = 0; i<bytes/4; i++)
    {
        cout<<"long ";
    }
    cout<<"int";
    
    return 0;
}
