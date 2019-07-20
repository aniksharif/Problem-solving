#include <bits/stdc++.h>
#define MAXSIZE 101
#define true 1
#define false 0
using namespace std;

typedef struct need{
    bool attached;
    bool bought;
}need;

need album[MAXSIZE]={false};

int main()
{
    int a, b, c, d, i, j,temp;

    cin>>a>>b>>c;
    for(i=0;i<b;++i)
    {
        cin>>d;
        album[d].attached=true;
    }
    for(i=0;i<c;++i)
    {
        cin>>d;
        album[d].bought=true;
    }
    for(i=1;i<=a;++i)
    {
        if(album[i].attached && album[i].bought)
         b--;
    }

  cout<<b<<endl;
   
    return 0;
}