#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j = 0, k = 0, l = 0, m = 0;
    float n;

    
    for(i=0;i<100;i++)
    {
        cin >> a;
        if(a>j)
        {
            j=a;
            k=i;
        }

    }

    cout<<j<<"\n"<<k+1<<endl;

    return 0;
}

