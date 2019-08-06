#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j, k;
    cin>>a>>b>>c;
    if(a==0)
    a=24;
    
    if(a+b+c>24)
    cout<<(a+b+c)-24<<endl;
    else if(a+b+c==24)
    cout<<0<<endl;
    else
    cout<<a+b+c<<endl;
    


    return 0;
}