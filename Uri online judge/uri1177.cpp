#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0,i,j=0,k;
    cin>>a;
    for(i=0;i<1000;i++)
    {
        if(j<a)
        {
            
           
            j++;
            
        }
      if(j==a || i==0)
      {
          j=0;
      }
         cout<<"N["<<i<<"] = "<<j<<endl;
        
        

    }
    return 0;
}