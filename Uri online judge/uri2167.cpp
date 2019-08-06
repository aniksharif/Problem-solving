#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c = 0, d = 1, i, j;

    cin >> a;
    for (i = 0; i < a; i++)
    {
        cin >> b;

        if (c < b || c == b)
        {
            c = b;
            d++;
            if (i == a - 1)
            {
                d = 0;
            }
        }
        else if (c > b)
        {
            break;
        }

        else
        {
            d = 0;
        }
    }
    cout << d << endl;
    return 0;
}