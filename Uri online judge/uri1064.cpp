#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,c=0,i;
    double a,total=0;
    
    for(i=1;i<=6;i++)
    {
        cin>>a;

        if(a>0)
        {
           c++;
           total=total+a;
        }
    }
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<(double)total/c<<endl;

    return 0;
}