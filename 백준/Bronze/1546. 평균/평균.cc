#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<fixed;
    cout.precision(14);
    
    int n;
    cin>>n;
    
    double a[n];
    double max = 0, avg = 0;
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        
        if(max<a[i])
        {
            max = a[i];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        a[i] = a[i]/max*100;
        
        avg+=a[i];
    }
    
    avg/=n;
    
    cout<<avg;
    
    return 0;
}
