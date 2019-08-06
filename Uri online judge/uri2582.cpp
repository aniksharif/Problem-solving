#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j = 0, k = 0, l = 0, m = 0;
    string arr[12]={"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
  
    cin >> a;
  
    while(a--)
    {
        cin>>b>>c;
        cout<<arr[b+c]<<endl;
    }

    return 0;
}

