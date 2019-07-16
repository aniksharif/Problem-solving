#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int a, b, c,d,i,j;
  double x,y,z;
 long int div[7]={100,50,20,10,5,2,1};
 long int div1[5]={ 50, 25, 10, 5,1};
long int result,ans;
cin>>x;
result=x;
b=(x-result)*100;
cout<<"NOTAS:"<<endl;
for(i=0;i<7;i++)
{
    ans=result/div[i];
    result=result%div[i];
    if(div[i]==1)
    {
        cout<<"MOEDAS:"<<endl;
        cout<<ans << " moeda(s) de R$ "<<div[i]<<".00"<<endl;
        for(j=0;j<5;j++)
        {
            c=b/div1[j];
            b=b%div1[j];
            if(div1[j]==5 || div1[j]==1)
            cout<<c << " moeda(s) de R$ 0.0"<<div1[j]<<endl;
            else
             cout<<c << " moeda(s) de R$ 0."<<div1[j]<<endl;
        }

    }
    else
    cout<<ans << " nota(s) de R$ "<<div[i]<<".00"<<endl;

}

 return 0;
}