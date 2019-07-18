#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0,i=1,j=7;
   
    
    while(i!=11)
    {
       
        cout<<"I="<<i<<" J="<<j<<endl;
        if(j==5)
        {
            j=7;
            i=i+2;
        }
        else
        {
            j=j-1;
        }
        
    }
    

    return 0;
}