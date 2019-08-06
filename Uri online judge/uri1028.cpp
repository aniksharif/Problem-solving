#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,d,n, i,j, lcd;

    cin>>n;
    for(j=0;j<n;j++)
    {
        cin >> a >> b;
    
    if(a<b)
    {
        lcd=a;
        a=b;
        b=lcd;
    }
    while(a%b!=0)
    {
        d=a;
        a=b;
        b=d%a;
        
    }
    cout << b << endl;

    }
    

    return 0;
}