#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c = 0, d = 0, i = 0, j = 0;
    string s, e;

    while (cin >> s)
    {
        if (s != "ABEND")
        {
            cin >> a;
            if (s == "SALIDA")
            {

                c++;
                i = i + a;
            }
            else if (s == "VUELTA")
            {

                d++;
                j = j + a;
            }
        }
        else
        {
            break;
        }
        
    }
    cout << i-j<< '\n'
         << c-d<<endl;

    return 0;
}