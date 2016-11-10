#include<bits/stdc++.h>
using namespace std;
#define M 1001
int t,n,d[31],v[31],x,temp[31];
int dp[31][M],dir[31][M];

int knap(int i,int w)
{
    if(i==n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int pro1=0,pro2=0;
    if(w+d[i]<=t)
        pro1=v[i]+knap(i+1,w+d[i]);
    pro2=knap(i+1,w);
    if(pro1>pro2)
    {
        dp[i][w]=pro1;
        dir[i][w]=1;
    }
    else
    {
        dp[i][w]=pro2;
        dir[i][w]=2;
    }
    return dp[i][w];
}

int main()
{
    bool notfirst=false;
    int i;
    bool taken[31];
    while(cin>>t>>x)
    {
        if(notfirst)
            cout<<endl;
        notfirst=true;
        cin>>n;
        x=3*x;
        for(i=0;i<n;i++)
        {
            cin>>d[i]>>v[i];
            temp[i]=d[i];
            d[i]=d[i]*x;
            taken[i]=false;
        }
        memset(dp,-1,sizeof(dp));
        memset(dir,-1,sizeof(dir));
        cout<<knap(0,0)<<endl;
        int c=0,j=0;
        for(i=0;i<n;i++)
        {
            if(dir[i][j]==1)
            {
                c++;
                j+=d[i];
                taken[i]=true;
            }
        }
        cout<<c<<endl;
        for(i=0;i<n;i++)
        {
            if(taken[i])
                cout<<temp[i]<<' '<<v[i]<<endl;
        }
    }
    return 0;
}
