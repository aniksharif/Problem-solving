#include <bits/stdc++.h>

using namespace std;

int main()
{
   double a=234.345,b=45.698;
   cout<<fixed<<setprecision(6)<<a<<" - "<<b<<endl;
   cout<<fixed<<setprecision(0)<<a<<" - "<<b<<endl;
   cout<<fixed<<setprecision(1)<<a<<" - "<<b<<endl;
   cout<<fixed<<setprecision(2)<<a<<" - "<<b<<endl;
   cout<<fixed<<setprecision(3)<<a<<" - "<<b<<endl;
   cout<<"2.343450e+02"<<" - "<<"4.569800e+01"<<endl;
   cout<<"2.343450E+02"<<" - "<<"4.569800E+01"<<endl;
   cout<<fixed<<setprecision(3)<<a<<" - "<<b<<endl;
   cout<<fixed<<setprecision(3)<<a<<" - "<<b<<endl;
    return 0;
}