#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, i, j;

    cin >> a >> b;
    if(a%2!=0 && b%2==0 || a%2==0 && b%2!=0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    

    return 0;
}