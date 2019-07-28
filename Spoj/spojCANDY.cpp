#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, c = 0, i = 0, j, k;
    long long int b[10000];

    while (true)
    {

        cin >> a;
        j = a;
        if (a == -1)
            break;
        c = 0;
        i = 0;
        k = 0;
        while (a--)
        {
            cin >> b[i];
            c = c + b[i];
            i++;
        }
        sort(b, b + j);
        if (c % j == 0)
        {
            for (i = 0; i < j; i++)
            {
                if (b[i] > (c / j))
                {
                    k = k + b[i] - (c / j);
                }
            }

            cout << k << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
  
    return 0;
}