#include<iostream>
using namespace std;

main()
{
    long long n,t,i,j,digit;
    cin>>t;
    for(j=0;j<t;j++)
    {
        digit=0;
        cin>>n;
        i=2;
        while(n>=10 && n>=i)
        {
            if(n%i==0)
                digit=(digit*10)+i,n/=i,i=2;
            else
                i++;
        }
        if(i==n)
            cout<<-1;
        else
            cout<<digit*10+n;
        cout<<endl;
    }
}
