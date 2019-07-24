#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j = 0, k = 0, l = 0;
    string s, t;
    string one = "one";
   

    cin >> a;
    while (a--)
    {
        cin >> s;

        if (s.length() == 5)
            cout << 3 << endl;
        else
        {
            j = 0;
            for (c = 0; c < 3; c++)
            {
                if (s[c] != one[c])
                {
                    j++;
                }
            }
            if (j == 1 || j == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
      
    }

    return 0;
}

