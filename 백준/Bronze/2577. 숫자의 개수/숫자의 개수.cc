#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int num;
    int arr[10] = {};
    
    cin>>a>>b>>c;
    
    num = a*b*c;
    while(num>0)
    {
        arr[(num%10)]++;
        num/=10;
    }
    
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }

    
    return 0;
}
