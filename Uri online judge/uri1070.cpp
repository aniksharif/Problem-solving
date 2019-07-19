#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c=0, d, i, j;
    cin>>a;
    c=a;
   for(i=0;i<6;i++)
   {
       
       if(c%2!=0){
           cout<<c<<endl;
           c=c+2;
       }
       else
       {
           c=a+1;
           cout<<c<<endl;
           c=c+2;
       }
       
   }
   
    return 0;
}