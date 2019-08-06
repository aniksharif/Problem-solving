#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    double b,d;
    double div[5]={4.00,4.50,5.00,2.00,1.00};

    cin>>a>>b;

    b=b*div[a-1];
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<b<<endl;

    

    

    return 0;
}