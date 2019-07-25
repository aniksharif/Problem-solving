#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j, k=0;
    double m,n,res;
    
    cin>>a;
    m=(1+sqrt(5))/2;
    n=(1-sqrt(5))/2;
    res=pow(m,a)-pow(n,a);
   cout<<fixed<<setprecision(1)<<res/sqrt(5)<<endl;
   
    return 0;
}