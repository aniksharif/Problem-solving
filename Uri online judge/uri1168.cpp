#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,d,n, i,j, lcd=0;
    string str;
    int value[10]={6,2,5,5,4,5,6,3,7,6};

    cin>>n;
    for(j=0;j<n;j++)
    {
        cin >> str;
        lcd=0;
    for(i=0;i<str.length();i++)
    {
        a=str[i]-'0';
        lcd=lcd+value[a];

    }
  
    cout << lcd <<" leds"<< endl;

    }
    

    return 0;
}