#include<iostream>
#include<cstring>
using namespace std;

long int a[10];

void digits(long n)
{
    while(n>0)
    {
        a[n%10]++;
        n/=10;
    }
}

main()
{
    long int n,t,i,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        memset(a,0,sizeof(a));
        cin>>n;
        for(i=1;i<=n;i++)
        {
            digits(i);
        }
        for(i=0;i<10;i++)
        {
            if(i>0)
                cout<<' ';
            cout<<a[i];
        }
        cout<<endl;
    }
}
