#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int a, c=0, i=0, j, k;
    long long int b[10000];
    
while(true)
{
    
   cin>>a;
   j=a;
   if(a==-1)
   break;
   c=0;
   i=0;
    while (a--)
    {
        cin>>b[i];
           c=c+b[i];
           i++;
    }
    sort(b,b+j);
    if(c%j==0)
    cout<<b[j-1]-(c/j)<<endl;
    else
    {
        cout<<-1<<endl;
    }
    
    

}
cout<<endl;
    return 0;
}