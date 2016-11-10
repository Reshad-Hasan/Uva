#include<iostream>
using namespace std;

main()
{
    double n;
    int x,t,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        n=360.0/(180.0-x);
        m=n;
        if(m==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
