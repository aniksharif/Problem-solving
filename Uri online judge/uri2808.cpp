#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c=0, d, i, j;
    string s,e;
    cin>>s>>e;
    if(abs(s[0]-e[0])==2 || abs(s[1]-e[1])==2)
   {
       cout<<"VALIDO"<<endl;
   }
   else
   {
       cout<<"INVALIDO"<<endl;
   }
   
    return 0;
}