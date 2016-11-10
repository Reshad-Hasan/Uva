#include<bits/stdc++.h>
using namespace std;

typedef long int li;

li n,a[205],q,d,m;
li dp[12][203][10000];

li knap(int num,int i,int v)
{
    if(num==m || i==n)
    {
        if(v%d==0 && num==0)
            return 1;
        else
            return 0;
    }
    if(dp[num][i][v]!=-1)
        return dp[num][i][v];
    int pos1=0,pos2=0;
    pos1=knap(num+1,i+1,(v+a[i])%d);
    pos2=knap(num,i+1,v%d);
    return dp[num][i][v]=pos1+pos2;
}

main()
{
    int i=1,j;
    while(cin>>n>>q,n||q)
    {
        for(j=0;j<n;j++)
            cin>>a[j];
        cout<<"SET "<<i++<<":\n";
        //memset(dp,-1,sizeof(dp));
        for(j=1;j<=q;j++)
        {
            cin>>d>>m;
            memset(dp,-1,sizeof(dp));
            cout<<"QUERY "<<j<<": "<<knap(0,0,0)<<endl;
        }
    }
}
