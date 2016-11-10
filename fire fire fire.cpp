#include<bits/stdc++.h>
using namespace std;
#define mem(dp,x) memset(dp,x,sizeof(dp))

vector<int>node[1003];
int par[1004],dp[1004][5];

int f(int u,int g)
{
    if(node[u].size()==0)
        return 0;
    if(dp[u][g]!=-1)
        return dp[u][g];
    int sum=0;
    for(int i=0;i<node[u].size();i++)
    {
        int v=node[u][i];
        if(v!=par[u])
        {
            par[v]=u;
            int x=f(v,0),y=f(v,1);
            if(g==0)
                sum+=y;
            else
                sum+=min(x,y);
        }
    }
    return dp[u][g]=sum+g;
}

main()
{
    int n;
    par[0]=-1;
    while(cin>>n,n!=0)
    {
        for(int i=1;i<n;i++)
        {
            int x,v;
            cin>>x;
            node[i].resize(x+1);
            for(int j=0;j<x;j++)
                cin>>node[i][j];
        }
        mem(dp,-1);
        cout<<min(f(1,0),f(1,1))<<endl;
    }
}
