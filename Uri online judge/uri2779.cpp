#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c=0, d, i, j;
    int card[400];
    cin>>a;
    cin>>b;
  for(j=0;j<b;j++)
  {
      cin>>card[j];
  }
    d=sizeof(card)/sizeof(card[0]);
    set<int> n(card,card+b);
    i=n.size();
    cout<<a-i<<endl;
   
    return 0;
}