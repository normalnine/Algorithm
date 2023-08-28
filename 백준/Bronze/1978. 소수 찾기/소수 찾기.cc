#include <iostream>

using namespace std;

int main()
{
    int n;
    int input;
    int count = 0;
    
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>input;
        
        if(input >1 && input < 4)
        {
            count++;
        }
        else
        {
           for(int j=2; j<input; j++)
            {
                if(input%j==0)
                {
                    break;
                }
                else if(j==(input-1))
                {
                    count++;
                }
            } 
        }
    }
    
    cout<<count;
    
    return 0;
}