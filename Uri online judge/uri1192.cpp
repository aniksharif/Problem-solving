#include <bits/stdc++.h>

using namespace std;

int main()
{
     int a, b, c, i, j, k;
     string s;
     
    
	cin>>a;
    while(a--)
    {
        cin>>s;
         if(s[0]==s[2]){
             cout<<((s[0]-'0')*(s[2]-'0'))<<endl;
         }
       else if(isupper(s[1]))
       {
          cout<<((s[2]-'0')-(s[0]-'0'))<<endl;
       }
       else
       {
           cout<<((s[0]-'0')+(s[2]-'0'))<<endl;
       }
       
        
    }
   
   

    return 0;
}