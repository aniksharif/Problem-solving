#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int a, b, c, i, j, k;

   
    while (true)
    {
        cin >>a>> b >> c;
        if(a==0 && b==0 && c==0)
        break;
        if(c-b==b-a)
        cout<<"AP "<<c+(c-b)<<endl;
        else
        cout<<"GP "<<c*(c/b)<<endl;      
    }

    return 0;
}