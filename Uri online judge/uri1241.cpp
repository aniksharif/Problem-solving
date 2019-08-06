#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int a,b,c=0,i,j,k;
   string s,t;
   cin>>a;
   for(i=0;i<a;i++)
   {
       cin>>s>>t;
       for(j=s.length()-1,k=t.length()-1;k>=0;k--,j--)
       {
           if(s[j]==t[k])
           {
               c++;
           }
           else
           {
               break;
           }
           
       }
       if(c==t.length())
       {
           cout<<"encaixa"<<endl;
           c=0;
           
           }
       else
       {
          cout<<"nao encaixa"<<endl;
          c=0;
       }
       
   }
    return 0;
}