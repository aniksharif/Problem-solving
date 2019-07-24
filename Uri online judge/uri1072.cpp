#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int a, b=0, c=0, i, j, k;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>k;
        if(k>=10 && k<=20)
        {
            b++;
        }
        else
        {
            c++;
        }
        
    }
   cout<<b<<" in\n"<<c<<" out\n";

    return 0;
}