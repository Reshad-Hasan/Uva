#include<bits/stdc++.h>
using namespace std;

int a[30],b[30],dp[30][30],n;

istream& operator >> (istream& in,int *a)
{
    int x;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        a[x-1]=i;
    }
    return in;
}

int LCS(int i,int j)
{
    if(i==n || j==n)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=0;
    if(a[i]==b[j])
        ans=1+LCS(i+1,j+1);
    else
        ans=max(LCS(i+1,j),LCS(i,j+1));
    return dp[i][j]=ans;
}

int main()
{
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        cin>>j;
        a[j-1]=i;
    }
    i=1;
    while(cin>>j)
    {
        b[j-1]=i++;
        if(i>n)
        {
            memset(dp,-1,sizeof dp);
            cout<<LCS(0,0)<<endl;
            i=1;
        }
    }
    return 0;
}
