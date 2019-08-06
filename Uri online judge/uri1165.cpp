#include <bits/stdc++.h>
#define n 10000001
using namespace std;
bool prime[n]; 


void calculation() 
{ 
    memset(prime, true, sizeof(prime)); 
 
    for (int p=2; p*p<=n; p++) 
    { 
       
        if (prime[p] == true) 
        { 
             
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
  
} 
int main()
{
   long long int a, b, c=0, i, j, k;
calculation();
    cin>>a;
  while(a--)
  {
      cin>>b;
      if(prime[b]==false)
      cout<<b<<" nao eh primo"<<endl;
      else
      cout<<b<<" eh primo"<<endl;
      
  }
   

    return 0;
}