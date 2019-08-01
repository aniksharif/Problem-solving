#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,c=0,i,j=0,k;
    double a,d;
    cin>>a;
    d=a*2;
    for(i=0;i<100;i++)
    {
       d=d/2;
         cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<d<<endl;
        

    }
    return 0;
}