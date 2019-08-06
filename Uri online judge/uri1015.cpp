#include <bits/stdc++.h>
using namespace std;
int main()
{
double a,b,c,d,temp1,temp2,result;
cin>>a>>b;
cin>>c>>d;
temp1=c-a;
temp2=d-b;
result=(temp1*temp1)+(temp2*temp2);
cout<<fixed << setprecision(4) <<sqrt(result)<<endl;
 return 0;
}