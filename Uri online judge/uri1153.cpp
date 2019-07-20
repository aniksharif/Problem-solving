#include <bits/stdc++.h>

using namespace std;

int fact(int a)
{
    if(a==1 || a==0)
    return 1;
    else
    {
        return a*fact(a-1);
    }
    
}

int main()
{
    int a, b, c=0, d, i, j;

    cin>>a;
    b=fact(a);
  cout<<b<<endl;
   
    return 0;
}