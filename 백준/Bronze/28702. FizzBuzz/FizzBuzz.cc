#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string a,b,c;
    int d;
    
    cin>>a>>b>>c;
    
    if(isdigit(a[0]))
    {
        d = stoi(a) + 3;
    }
    else if(isdigit(b[0]))
    {
        d = stoi(b) + 2;
    }
    else
    {
        d = stoi(c) + 1;
    }
    
    if(d%3==0 && d%5==0)
    {
        cout<<"FizzBuzz";
    }
    else if(d%3==0 && d%5!=0)
    {
        cout<<"Fizz";
    }
    else if(d%3!=0 && d%5==0)
    {
        cout<<"Buzz";
    }
    else
    {
        cout<<d;
    }
    

    return 0;
}