#include<iostream>
using namespace std;

int main()
{
    int num;
    int max = 0;
    int indexMax;
    
    for(int i=1; i<10; i++)
    {
       cin>>num;
       if(num > max)
       {
           max = num;
           indexMax = i;
        }
    }
    
    cout<<max<<endl;
    cout<<indexMax<<endl;
    
    return 0;
}