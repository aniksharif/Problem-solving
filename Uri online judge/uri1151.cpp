#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, i, j, fib1 = 0, fib2 = 1,fib3=1;
    int find[47];

    cin >> a ;
    find[0]=0;
    find[1]=1;
    for (i = 2; i < a; i++)
    {
        fib3=fib1+fib2;
        find[i]=fib3;
        fib1=fib2;
        fib2=fib3;
    }
    
    for (i = 0; i < a-1; i++)
    {
        cout<<find[i]<<" ";
    }
    cout<<find[a-1]<<endl;

    return 0;
}

