#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c,d=0,i;
   cin>>a>>b;
   if(a>b){
       c=a;
       a=b;
       b=c;
   }
   for(i=a;i<=b;i++)
   {
       if(i%13!=0)
       {
           d=d+i;
       }
   }
 cout<<d<<endl;
   
    return 0;
}