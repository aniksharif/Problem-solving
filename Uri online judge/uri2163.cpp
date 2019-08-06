#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, i, j, row = 0, col = 0;
    int find[1001][1001];

    cin >> a >> b;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cin >> find[i][j];
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (find[i][j] == 42 && find[i][j - 1] == 7 && find[i][j + 1] == 7 && find[i + 1][j] == 7 && find[i - 1][j] == 7 && find[i - 1][j - 1] == 7 && find[i + 1][j - 1] == 7 && find[i - 1][j + 1] == 7 && find[i + 1][j + 1] == 7)
            {
                row = i + 1;
                col = j + 1 ;
                break;
            }
        }
    }

    // cout<<0<<" "<<0<<endl;
    cout << row << " " << col << endl;

    return 0;
}

