#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int a, b, c,i;
 long int div[7]={100,50,20,10,5,2,1};
 long int result,ans;
cin>>a;
result=a;
cout<<a<<endl;
for(i=0;i<7;i++)
{
    ans=result/div[i];
    result=result%div[i];
    
    cout<<ans << " nota(s) de R$ "<<div[i]<<",00"<<endl;

}

 return 0;
}