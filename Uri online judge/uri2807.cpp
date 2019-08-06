   #include <bits/stdc++.h>

using namespace std;

int main()
{
    int fib1 = 1, fib2 = 1, fib3,i=0,j=1,a;
    int arr[41];
     
    
    cin>>a; 
  
        arr[0]=fib1;
        arr[1]=fib2;
     for(i=2;i<a;i++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        arr[i]=fib3;
    }
    for(j=a-1;j>=1;j--)
    {
        cout<<arr[j]<<" ";
    }
    cout<<arr[0]<<endl;

    return 0;
}
   
 