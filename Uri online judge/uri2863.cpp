#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, c = 0, i, j = 0, k;

    while (cin >> a)
    {
        double b[a];
        for (i = 0; i < a; i++)
        {
            cin >> b[i];
        }
        sort(b, b + a);
        cout<< b[0] << endl;
    }

    return 0;
}

