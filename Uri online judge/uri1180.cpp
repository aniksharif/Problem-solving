#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i, j, k=0;
    int arr[1000],arr1[1000];
    cin>>a;
    
    for(i=0;i<a;i++)
    {
        cin>>b;
        arr[i]=b;
        arr1[i]=b;
    }
    sort(arr1,arr1+a);
    cout<<"Menor valor: "<<arr1[0]<<endl;
     for(i=0;i<a;i++)
    {
        if(arr[i]==arr1[0])
        {
            cout<<"Posicao: "<<i<<endl;
            break;
        }
    }
   
    return 0;
}