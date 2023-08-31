#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int number[100];
    int max = 0;
    
    cin>>n>>m;
    
    
    for(int i=0; i<n; i++)
    {
        cin>>number[i];
    }
    
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int sum = number[i] + number[j] + number[k];
                
                if(max<sum && sum<=m)
                {
                    max = sum;
                }
            }
        }
    }
    
    cout<<max;
    
    return 0;
}