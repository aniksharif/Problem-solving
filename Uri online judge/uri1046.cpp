#include <bits/stdc++.h>

using namespace std;

int main()
{
int a,b,c, d, n, i, j, lcd = 0;
 cin>>a>>b;
 if(a>b)
 {
     cout<<"O JOGO DUROU "<<(24-a)+b<<" HORA(S)"<<endl;
 }
 else if(a==b)
 {
     cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
 }
 else
 {
     cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;
 }
 
 

 return 0;
}