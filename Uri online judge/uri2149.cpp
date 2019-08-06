#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b[17], c, i, j = 0, k = 0, l = 0, m = 0;
    float n;

    while (cin >> a)
    {

        for (i = 0; i < a; i++)
        {
            if (i < 2)
                b[i] = i;
            else
            {
                if (i % 2 == 0)
                {
                    b[i] = b[i - 1] + b[i - 2];
                }
                else
                {
                    b[i] = b[i - 1] * b[i - 2];
                }
            }
        }
        cout << b[a - 1] << endl;
    }

    return 0;
}

