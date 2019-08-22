#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, c = 0, i = 0, j = 0, k;
    string d;

    while (cin >> a)
    {
        i++;
        if (a == 0)
        {
            cout << "Caso " << i << ": 1 numero" << endl;
            cout << 0 <<"\n"<< endl;
        }
        else
        {
            cout << "Caso " << i << ": " << ((a * (a + 1)) / 2) + 1 << " numeros" << endl;
            cout << 0 << " ";
            for (j = 1; j <= a; j++)
            {
                k = 1;
                while (k <= j)
                {
                    
                    if (k == a)
                        break;
                    else
                        cout << j << " ";
                    k++;
                }
            }
            cout<<a<<"\n"<<endl;
        }
    }

    return 0;
}

