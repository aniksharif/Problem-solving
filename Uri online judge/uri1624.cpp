#include <bits/stdc++.h>

using namespace std;
int max(int a,int b){ return(a>b)?a:b;}

int knapsack(int p[],int wt[],int n,int weight)
{
    int i,j;
    int k[n+1][weight+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=weight;j++)
        {
            if(i==0 || j==0)
            k[i][j]=0;
            else if(wt[i-1]<=j)
            {
                k[i][j]=max(p[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
            }
            else
            {
                k[i][j]=k[i-1][j];
            }
            
        }
    }
    return k[n][weight];
}

int main()
{
   int a, wt[100], p[100],b,c, i, j = 0, k, l = 0, m = 0;
    while(cin>>a)
    {
        if(a==0)
        break;

        for(i=0;i<a;i++)
        {
            cin>>p[i]>>wt[i];
        }
        cin>>b;
        cout<<knapsack(p,wt,a,b)<<endl;
    }
    return 0;
}

