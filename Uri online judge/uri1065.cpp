#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0,i;
   
    
    for(i=1;i<=5;i++)
    {
        cin>>a;

        if(a%2==0)
        {
           c++;
        }
    }
    cout<<c<<" valores pares"<<endl;

    return 0;
}