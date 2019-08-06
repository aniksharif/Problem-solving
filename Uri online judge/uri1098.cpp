#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,c=0;
    float i=0,j=1;
   
    
    while(i<2.2)
    {
       
        cout<<"I="<<i<<" J="<<j<<endl;
        c++;
        if(c==3)
        {
            
            i=i+.2;
            j=i+1;
            c=0;
        }
        else
        {
            j=j+1;
        }
        
    }
    

    return 0;
}