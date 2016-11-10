#include<iostream>
#include<string>
using namespace std;

int a[20]={0};
int fibo(int n)
{
    if(n==0||n==1)
        return 1;
    if(a[n]==0)
        a[n]=fibo(n-1)+fibo(n-2);
    return a[n];
}

main()
{
    cout<<fibo(4);
}
