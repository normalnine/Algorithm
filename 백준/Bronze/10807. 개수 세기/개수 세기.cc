#include<iostream>
using namespace std;

int main()
{
    int i, count, num, answer = 0;
    int a[100];
    
    cin>>count;    
    
    for(i=0; i<count; i++)
    {
        cin>>a[i];
    }
    
    cin>>num;
    
    for(i=0; i<count; i++)
    {
        if(a[i] == num)
        {
            answer++;
        }
    }
    
    cout<<answer;
    
    return 0;
}