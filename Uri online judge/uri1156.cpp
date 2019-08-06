#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    double a,d,S=0;
    int b=1;

    for(a=1;a<=39;a+=2)
    {
        d=a/b;
        S+=d;
        b*=2;
    }

    
    cout<<fixed<<setprecision(2)<<S<<endl;

    

    

    return 0;
}