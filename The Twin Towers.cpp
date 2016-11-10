#include<bits/stdc++.h>
using namespace std;

int n1[103],n2[103],dp[103][103];
int length1,length2;

int LCS(int i,int j)
{
    if(i==length1 || j==length2)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=0;
    if(n1[i]==n2[j])
        ans=1+LCS(i+1,j+1);
    else
        ans=max(LCS(i+1,j),LCS(i,j+1));
    return dp[i][j]=ans;
}

int main()
{
    int testcase=0,i;
    bool first=false;
    while(cin>>length1>>length2, length1 && length2)
    {
        if(first)
            //cout<<endl;
        first=true;
        for(i=0;i<length1;i++)
            cin>>n1[i];
        for(i=0;i<length2;i++)
            cin>>n2[i];
        memset(dp,-1,sizeof dp);
        int ans=LCS(0,0);
        cout<<"Twin Towers #"<<++testcase<<endl;
        cout<<"Number of Tiles : "<<ans<<endl<<endl;
    }
}
