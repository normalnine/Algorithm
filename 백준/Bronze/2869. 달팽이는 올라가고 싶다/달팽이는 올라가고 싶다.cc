#include <iostream>

using namespace std;

int main()
{
    int a,b,v, day;
    
    cin>>a>>b>>v;
    
    day = (v-a) / (a-b) + 1;
    
    if((v-a)%(a-b)!=0)
    {
        day++;
    }
    
    cout<<day;
    
    return 0;
}
