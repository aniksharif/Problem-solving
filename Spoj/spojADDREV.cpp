#include <bits/stdc++.h>

using namespace std;
int rev(int n)
{
  int sum=0;
  while(n)
  {
    sum=(sum*10)+n%10;
    n=n/10;

  }
  return sum;
}

int main()
{
    int a,b,c,i,j,k;
 
    cin>>a;
  while(a--)
  {
      cin>>b>>c;
      cout<<rev(rev(b)+rev(c))<<endl;
      
  }


  
  
    return 0;
}