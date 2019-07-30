#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j = 0, k = 0, l = 0, m = 0;
    float n;

    cin >> a;

    while (a--)
    {
        cin >> n;
         j = 0;
      while(n>1)
      {
          n=n/2;
          j++;
      }

        cout << j << " dias" << endl;
    }

    return 0;
}

