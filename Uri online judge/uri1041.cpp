#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,d,n, i,j, lcd=0;
   double a,b;

    cin>>a>>b;
   if(a==0 && b== 0)
   {
       cout <<"Origem"<< endl;

   }
   else if(a==0 && b!=0)
   {
       cout <<"Eixo Y"<< endl;
   }
  else if(a!=0 && b==0)
  {
      cout <<"Eixo X"<< endl;
  }
   else if(a>0 && b>0)
   {
       cout<<"Q1"<<endl;
   } 
    else if(a<0 && b>0)
    {
        cout<<"Q2"<<endl;
    }
    else if(a<0 && b<0)
    {
        cout<<"Q3"<<endl;
    }
    else 
    {
        cout<<"Q4"<<endl;
    }
    
    

    return 0;
}