#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, d, n, i, j, lcd = 0;
    int a[3], b[3];

    for (i = 0; i < 3; i++)
    {
        cin >> c;
        a[i]=c;
        b[i]=c;
       
    }

    n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    for (i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }
    cout << '\n';
    for (i = 0; i < 3; i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}