#include<bits/stdc++.h>
using namespace std;
#define mx 1005
int dp[mx][mx];

string a,b;
int l;
int lcs(int i,int j)
{
    if(a[i]==NULL || b[j]==NULL)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=0;
    if(a[i]==b[j])
        ans=1+lcs(i+1,j+1);
    else
        ans=max(lcs(i+1,j),lcs(i,j+1));
    return dp[i][j]=ans;
}
void printsolution(int i,int j)
{
    string ans;
    if(ans.size()==l)
    {
        cout<<ans<<endl;
        return;
    }
    if(a[i]==b[j])
        ans+=a[i];
    if(dp[i+1][j]>dp[i][j+1])
        printsolution(i+1,j);
    else
        printsolution(i,j+1);
}
int main()
{
    while(getline(cin,a),getline(cin,b))
    {
        memset(dp,-1,sizeof(dp));
        l=lcs(0,0);
      //  ans.resize(0);

        cout<<l<<endl;
       // printsolution(0,0);
    }
    return 0;
}
