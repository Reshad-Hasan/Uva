#include<bits/stdc++.h>
using namespace std;
#define lm 1000
int hight[lm],width[lm],i_dp[lm],d_dp[lm],i_dir[lm],d_dir[lm];
int n;

int is(int u)
{
    if(i_dp[u]!=-1)
        return i_dp[u];
    int length=0;
    for(int v=u+1;v<n;v++)
    {
        if(hight[v]>hight[u])
        {
            int x=is(v);
            if(x>lenght)
                length=x;
        }
    }
    return i_dp[u]=length+width[u];
}

int ds(int u)
{
    if(d_dp[u]!=-1)
        return d_dp[u];
    int length=0;
    for(int v=u+1;v<n;v++)
    {
        if(hight[v]<hight[u])
        {
            int x=ds(v);
            if(x>length)
                length=x;
        }
    }
    return d_dp[u]=length+width[u];
}

int main()
{
    int t,i,j;
    cin>>c;
    for(i=1;i<=n;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
            cin>>hight[j];
        for(j=0;j<n;j++)
            cin>>width[j];
        memset(i_dp,-1,sizeof i_dp);
        memset(d_dp,-1,sizeof d_dp);
        int i_lenght=0,d_length=0,x,y;
        for(j=0;j<n;j++)
        {
            x=is(j);
            y=ds(j);
            if(i_lenght<x)
                i_lenght=x;
            if(d_length<y)
                d_length=y;
        }
        cout<<"Case "<<i<<". Increasing ("<<i_lenght<<")";
        cout<<". Decreasing ("<<d_length<<")."<<endl;
    }
}

