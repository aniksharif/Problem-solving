#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0,i,j,k;
    string s;
    cin>>a;
    getchar();
    while(a--)
    {
        getline(cin,s);
        stack<char>p;
        c=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='<')
            {
                p.push(i);
            }
            if(s[i]=='>')
            {
                if(!p.empty())
                {
                       p.pop();
                       c++;
                }
             
                
                
            }
            
        }
        
        cout<<c<<endl;
        
        
    }  
    return 0;
}