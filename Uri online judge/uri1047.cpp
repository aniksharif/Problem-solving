#include <bits/stdc++.h>

using namespace std;

int main()
{
int a,b,c, d, n, i, j, hour=0,min=0;
 cin>>a>>c>>b>>d;
if(b-a<0)
{
    hour=24+(b-a);
}
else{
    hour=b-a;
} 
 if(d-c<0){
     min=60+(d-c);
     hour--;

 }
 else{
     min=d-c;
 }
 if(a==b && c==d)
 {
     cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
 }
 else{
     cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
 }

 return 0;
}