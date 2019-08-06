#include <bits/stdc++.h>

using namespace std;
unsigned long long int fact(unsigned long long int n)
{
    unsigned long long int i,sum=1;
    if(n==0)
    {
        return sum;
    }
    else
    {
        for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
    }
    
    
}

int main()
{
   unsigned long long int a,b, i, j, k = 0, l = 0, m = 0;
    
    while(cin>>a>>b)
    {
        cout << fact(a)+fact(b)<<endl;
    }
    
    return 0;
}

