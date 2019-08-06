#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j,k=0,l=0;
    string s,t;
    cin>>a;
   while(a--)
   {
       
       cin>>s>>t;  
       
      
       l=0,k=0;
       for(i=0;i<50;i++)
       {
           if(s[i]=='\0')
           k=1;
           if(t[i]=='\0')
           l=1;
           if(k==1 && l==1)
           {
               break;
           }
           if(k==0)
           cout<<s[i];
           if(l==0)
           cout<<t[i];
          
           
           
       }
       cout<<endl;
   }


  
  
    return 0;
}