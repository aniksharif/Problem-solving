#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j = 0, k = 0, l = 0, m = 0;
    int arr[5];
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
            j++;
        if (arr[i] % 2 != 0)
            k++;
        if (arr[i] < 0)
            l++;
        if (arr[i] > 0)
        m++;
    }
    cout<<j<<" valor(es) par(es)"<<endl;
    cout<<k<<" valor(es) impar(es)"<<endl;
    cout<<m<<" valor(es) positivo(s)"<<endl;
    cout<<l<<" valor(es) negativo(s)"<<endl;


    return 0;
}

