#include<iostream>
using namespace std;

int main()
{
   int h,m,t;
   
   cin>>h>>m>>t;
   
   m+=t;
   
   while(m>=60)
   {
       m-=60;
       h++;
       if(h>23)
       {
           h =0;
       }
   } 
   cout<<h<<" "<<m;
    
    return 0;
}