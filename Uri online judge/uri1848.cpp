#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j = 3, k = 0, l = 0, m = 0;
    string a;

    
        while (getline(cin, a))
        {
            if (a == "caw caw")
            {
                cout << k << endl;
                k = 0;
                j--;
                if(j==0)
                break;
            }
            else
            {
                for (i = 0; i < 3; i++)
                {
                    if (a[i] == '*')
                    {
                        if (i == 2)
                            k += pow(2, 0);
                        else if (i == 0)
                            k += pow(2, 2);
                        else
                            k += pow(2, 1);
                    }
                }
            }
        }
    

    return 0;
}

