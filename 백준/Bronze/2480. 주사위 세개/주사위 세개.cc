#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
   int result = 0;
   
   cin>>a>>b>>c;
   
   if(a==b && a==c && b==c)
   {
       result = 10000 + a * 1000;
   }
   else if(a==b || a==c)
   {
       result = 1000 + a * 100;
   }
   else if(b==c)
   {
       result = 1000 + b * 100;
   }
   else
   {
       if(a>b && a>c)
       {
           result = a*100;
       }
       else if(b>a && b>c)
       {
           result = b*100;
       }
       else
       {
           result = c*100;
       }
   }
    
    cout<<result;
    
    return 0;
}