#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f;

    cin>>a>>b>>c;
    d=(pow(b,2)-(4*a*c));
    e=(-b+sqrt(d))/(2*a);
    f=(-b-sqrt(d))/(2*a);
    if(a!=0 && d>0)
    {
        cout<<fixed<<setprecision(5)<<"R1 = "<<e<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<f<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }
    

    

    return 0;
}