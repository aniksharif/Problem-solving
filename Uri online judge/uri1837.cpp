#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, i, j;

    cin >> a >> b;
    i = a / b;
    j = a % b;
    if (a < 0)
    {
        c = b;
        if (b < 0)
            c = b * -1;
            // cout<<2*-1;
        for (j = 0; j < c; j++)
        {
            d = a - j;
            if (d % b == 0)
                break;
        }
        i = d / b;
    }
    else
    {
        i = a / b;
        j = a % b;
    }

    cout << i << " " << j << endl;

    return 0;
}