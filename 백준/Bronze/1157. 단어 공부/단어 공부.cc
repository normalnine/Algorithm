#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int arr[26] = {0,};
    int max = 0;
    bool duplication = false;
    char c;
    
    cin>>s;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]<='Z')
        {
            arr[(int)s[i]-65]++;
        }
        else
        {
            arr[(int)s[i]-97]++;
        }
    }
    
    for(int i =0; i<26; i++)
    {
        if(arr[i] >  max)
        {
            max = arr[i];
            duplication = false;
            c = (char)(i+65);
        }
        else if(arr[i] == max)
        {
            duplication = true;
        }
    }
    
    if(duplication)
    {
        cout<<"?";
    }
    else
    {
        cout<<c;
    }
    
    

    return 0;
}