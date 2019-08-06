#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0,i,j,k;
    string s;
    while(getline(cin,s))
    {
        stack<char>p;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                p.push(i);
            }
            if(s[i]==')')
            {
                if(!p.empty())
                p.pop();
                else
                {
                    p.push(i);
                }
                
            }
            
        }
        if(p.empty())
        cout<<"correct"<<endl;
        else
        {
            cout<<"incorrect"<<endl;
        }
        
    }  
    return 0;
}