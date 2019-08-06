#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,s=0,i=0, j;
    

    while(cin>>a)
    {
        if(a<0)
        break;
        
        s+=a;
        i++;

    }

    cout<<fixed<<setprecision(2)<<(s*1.00)/i<<endl;
   
    

    return 0;
}
