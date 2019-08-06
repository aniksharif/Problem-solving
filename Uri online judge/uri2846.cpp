#include <bits/stdc++.h>
#define MAXSIZE 101


using namespace std;
bool arr[1000001];
long long int arr1[1000001];


void calculation()
{
     long long int fib1 = 0, fib2 = 1, fib3 = 1,i=0,j=1;
 
        arr[0]=true;
        arr[1]=true;
    while (fib1 + fib2 < 1000001)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        arr[fib3]=true;
    }

    while(i<=1000001)
    {
        if(arr[i]==false)
        {
            arr1[j]=i;
            j++;
            i++;
        }
        else
        {
            i++;
        }
        
        
       
    }


}

int main()
{
   long long int a, b, c = 0, d = 0, i = 0, j = 0;
   calculation();
    
    cin>>a;

   cout<<arr1[a]<<endl;
    return 0;
}