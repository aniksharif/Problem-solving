#include <bits/stdc++.h>

using namespace std;

int main()
{
     int a, b, c, i, j, k;
     string s,t;
     
    
	cin>>a;
    while(a--)
    {
        cin>>s;
        cin>>b;
        for(i=0;i<s.length();i++)
        {
            if(int(s[i])-b<65)
            cout<<char((90-(b-1))+int(s[i])-65);
            else
            cout<<char(int(s[i])-b);
        }
        cout<<endl;
        
    }
   
   

    return 0;
}