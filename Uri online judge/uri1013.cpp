#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a, b, c,temp;
cin>>a>>b>>c;
temp=a;
if(a<b || a<c)
{
if (b<c)
{
    temp=c;
}
else
{
    temp=b;
}

}
cout<<c<<" eh o maior"<<endl;
 return 0;
}