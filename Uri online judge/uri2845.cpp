#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int a, b, c, d, i, j;
   long long int card[20000];
    cin >> a;

    for (j = 0; j < a; j++)
    {
        cin >> card[j];
    }
    sort(card, card + a);
    d = card[a - 1] + 1;

    while (true)
    {
        c = 0;
        for (j = 0; j < a; j++)
        {
            if(card[j]==1)
            {
                c++;
            }
            else if (__gcd(d,card[j]) == 1)
            {
                c++;
            }
        }
        if (c == a)
        {
            break;
        }
        else
        {
            d++;
        }
    }
    cout << d << endl;
    return 0;
}