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
    map<int,int>mp;
    int N,n,k;
    cin>>N;
    while(N--)
    {
        cin>>n>>k;
        if(mp[k])
        {
            cout<<mp[k]<<endl;
        }
        else
        {
            int x=k^(k>>1);
            mp[k]=x;
            cout<<x<<endl;
        }
    }
}
