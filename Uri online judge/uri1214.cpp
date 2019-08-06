#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j,k=0,l=0;
    cin>>a;
   while(a--)
   {
       cin>>b;
       k=0;
       i=0;
       int c[b];
       while(b--)
       {
           cin>>c[i];
           k+=c[i];
           i++;
       }
       l=0;
       for(j=0;j<i;j++)
       {
           if(c[j]>(k/i))
           l++;
       }
       cout<<fixed<<setprecision(3)<<(100.0*l)/i<<"%"<<endl;
   }


  
  
    return 0;
}