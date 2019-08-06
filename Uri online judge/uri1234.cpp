#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j, k;
    string s;
 
    while(getline(cin,s))
   { 
      
    j=0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            j++;
            if (j % 2 == 0)
            {
                s[i] = char(tolower(s[i]));
                cout << char(tolower(s[i]));
            }

            else if (j % 2 == 1)
            {
                s[i] = char(toupper(s[i]));
                cout << char(toupper(s[i]));
            }
        }
        else{
            cout<<s[i];
            
        }

    }
    cout<<"\n";
    }

    return 0;
}