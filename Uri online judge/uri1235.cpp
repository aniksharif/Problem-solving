#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j, k=0;
    string s,t;
    cin>>a;
    getchar();
    a=a;
    while(a--)
   { 
      
       getline(cin,s);
     
         c=s.length();
    for(i=(c/2)-1;i>=0;i--)
    {
        cout<<s[i];
    }
    for(j=c-1;j>=c/2;j--)
    {
        cout<<s[j];
    }
    
    
    cout<<endl;
    
}
    return 0;
}