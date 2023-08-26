#include <iostream>

using namespace std;

int main()
{
    int t, h, w, n;
    int arr[100];
    
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        cin>>h>>w>>n;
        
        if(n%h==0)
        {
            arr[i] = h*100 + n/h;
        }
        else
        {
            arr[i] = (n%h)*100 + n/h +1;
        }
        
    }
    
    for(int i=0; i<t; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
