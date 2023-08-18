/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int word = 1;
    getline(cin, s);
    
    if(s.empty())
    {
        cout << "0";
        return 0;
    }
    
    
    
    
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