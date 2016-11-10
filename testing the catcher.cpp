#include<bits/stdc++.h>
using namespace std;
#define mx 10000

int dp[mx],n;
int value[mx];

int longest(int u)
{
    if(dp[u]!=-1)
        return dp[u];
    int maxi=0;
    for(int v=u+1;v<n;v++)
    {
        if(value[v]<=value[u])
        {
            int x=longest(v);
            if(x>maxi)
            {
                maxi=x;
            }
        }
    }
    return dp[u]=maxi+1;
}

int main()
{
    bool start=false;
    int testcase=0,x,i;
    n=0;
    while(cin>>x)
    {
        if(x==-1)
            break;
        if(start)
            cout<<endl;
        start=true;
        value[n++]=x;
        while(cin>>x)
        {
            if(x==-1)
                break;
            value[n++]=x;
        }
        memset(dp,-1,sizeof dp);
        int lis=0,z;
        for(i=0;i<n;i++)
        {
            z=longest(i);
            if(z>lis)
                lis=z;
        }
        cout<<"Test #"<<++testcase<<":\n";
        cout<<"  maximum possible interceptions: "<<lis<<endl;
        n=0;
    }
}
