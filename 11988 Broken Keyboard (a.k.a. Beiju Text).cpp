#include<bits/stdc++.h>
using namespace std;

#define asgn_arr(a,n) for(int i=0;i<n;i++)cin>>a[i];
typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

main()
{
    ios::sync_with_stdio(false);
    vector<lli>v;
    v.push_back(0);
    v.push_back(1);
    lli n,k,N,d=1,q=1;
    cin>>N;
    while(N--)
    {
        cin>>n>>k;
        int x=0;
        if(d<n)
        {
            x=n-d;
            d=n;
        }
        while(x--)
        {
            for(int i=v.size()-1;i>=0;i--)
                v.push_back(v[i]|(1<<q));
            q++;
        }
        cout<<v[k]<<endl;
    }
}

