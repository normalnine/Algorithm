#include <iostream>

using namespace std;

int main()
{
    int k, n, t;
    
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        cin>>k>>n;
        
        int arr[k+1][n+1] = {0};
        
        for(int j=0; j<k+1; j++)
        {
            for(int l=0; l<=n; l++)
            {
                if(j==0)
                {
                    arr[j][l] = l;
                }
                else
                {
                    for(int m=0; m<=l; m++)
                    {
                        arr[j][l] += arr[j-1][m];
                    }
                }
            }
        }
        cout<<arr[k][n]<<endl;
    }
    
    return 0;
}