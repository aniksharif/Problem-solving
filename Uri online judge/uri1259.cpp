#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,i,j,k=0,l=0;
    long long int even[100000],odd[100000];
    cin>>a;
   while(a--)
   {
       
       cin>>b;  
       if(b%2==0)
       {
           even[k]=b;
           k++;

       }
       else
       {
           odd[l]=b;
         
           l++;
           
       }
       


      
   }
   sort(even,even+k);
   sort(odd,odd+l,greater<long long int>());
   for(i=0;i<k;i++)
   cout<<even[i]<<endl;
   for(j=0;j<l;j++)
   cout<<odd[j]<<endl;

    return 0;
}