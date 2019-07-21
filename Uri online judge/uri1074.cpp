#include <bits/stdc++.h>

using namespace std;

int main()
{
   long int a, b, c = 0, d = 0, i = 0, j = 0;
    
    cin>>a;

    for(i=0;i<a;i++)
    {
        cin>>b;
        if(b==0)
        {
            cout<<"NULL"<<endl;
        }
        else if(b<0 && b%2!=0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
        else if(b<0 && b%2==0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(b>0 && b%2!=0)
        {
            cout<<"ODD POSITIVE"<<endl;
        }
        else if(b>0 && b%2==0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
    }

   
 

    return 0;
}