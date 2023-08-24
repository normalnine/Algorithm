#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    
    cin>>n;
    
    int score[n] = {};
    
    for(int i=0; i<n; i++)
    {
        cin>>s;
        
        for(int j=0; j<s.length(); j++)
        {
            if(s[j] == 'O')
            {
                int k = j;
                
                while(s[k] == 'O')
                {
                    score[i]++;
                    k--;
                }
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<score[i]<<endl;
    }
    
    return 0;
}
