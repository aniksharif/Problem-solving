#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c=0, d, i, j;
    int card[400];
    string s[9]={"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen","Rudolph"};
    
  for(j=0;j<9;j++)
  {
      cin>>a;
      c=c+a;
  }
   if(c%9==0)
    cout<<s[8]<<endl;
    else
    {
        cout<<s[(c%9)-1]<<endl;
    }
    
   
    return 0;
}