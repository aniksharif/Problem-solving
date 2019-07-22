#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c = 0, i, j, k;
    string s;
    while(cin>>s)
    {
        cin>>a;
        while(a--)
        {
            cin>>b;
            cout<<s[b-1];
        }
        cout<<endl;
    }
            

    return 0;
}