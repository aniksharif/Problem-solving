#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,c=0,i;
    double a;
    
    for(i=1;i<=6;i++)
    {
        cin>>a;

        if(a>0)
        {
           c++;
        }
    }
    cout<<c<<" valores positivos"<<endl;

    return 0;
}