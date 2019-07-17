#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, n, i, j, lcd = 0;
    double res[3];
    for (i = 0; i < 3; i++)
    {
        cin >> res[i];
    }
    n = sizeof(res) / sizeof(res[0]);
    sort(res, res + n);
    if (res[2] >= res[0] + res[1])
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (pow(res[2], 2) == pow(res[1], 2) + pow(res[0], 2))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(res[2], 2) > pow(res[1], 2) + pow(res[0], 2))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(res[2], 2) < pow(res[1], 2) + pow(res[0], 2))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (res[2] == res[1] && res[1] == res[0])
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((res[2] == res[1] && res[1] != res[0]) || (res[2] != res[1] && res[1] == res[0]) || (res[2] == res[0] && res[1] != res[0]))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}