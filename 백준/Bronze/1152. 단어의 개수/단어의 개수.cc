#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int word = 1;
    getline(cin, s);
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            word++;
        }
    }
    
    if(s[0]==' ')
    {
        word--;
    }
    
    if(s[s.length()-1] == ' ')
    {
        word--;
    }
    
    cout<<word;
    
    return 0;
}