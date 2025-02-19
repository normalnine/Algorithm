#include <iostream>
using namespace std;

int main()
{
    int n;
    int s, m, l, xl, xxl, xxxl;
    int t, p;
    
    cin>>n;
    cin>>s>>m>>l>>xl>>xxl>>xxxl;
    cin>>t>>p;
    
    int a[6] = {s, m, l, xl, xxl, xxxl};
    
    int order_t = 0;

    for(int i=0; i<6; i++)
    {
        order_t+=a[i]/t;
        
        if(a[i]%t>0)
        {
            order_t++;
        }
    }
    
    cout<<order_t<<endl;
    cout<<n/p<<" "<<n%p<<endl;

    return 0;
}