#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,p,q,t,a[40],th,i,count,w;
    cin>>t;
    for(th=1;th<=t;th++)
    {
        count=w=0;
        cin>>n>>p>>q;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n && count<p;i++)
        {
            if(a[i]+w<=q)
            {
                count++;
                w+=a[i];
            }
            else
            {
                break;
            }
        }
        cout<<"Case "<<th<<": "<<count<<endl;
    }
}
