#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int a, b, c,d,i;

 long int result,ans;
cin>>a;


b=a/3600;
c=(a%3600)/60;
d=(a%3600)%60;
    
cout<<b<<":"<<c<<":"<<d<<endl;



 return 0;
}