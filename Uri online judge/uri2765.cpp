#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
   string str;
   getline(cin,str);
  for(i=0;i<str.length();i++)
  {
      if(str[i]==',')
      cout<<"\n";
      else
      {
          cout<<str[i];
      }
      
  }
 cout<<endl;
   
    return 0;
}