#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

#define mx 1005
int price[mx],wight[mx],n;
int dp[mx][mx];
int nap(int i,int w,int c)
{
    if(i==n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int pro1=0,pro2=0;
    if(w+wight[i]<=c)
        pro1=price[i]+nap(i+1,w+wight[i],c);
    pro2=nap(i+1,w,c);
    dp[i][w]=max(pro1,pro2);
    return dp[i][w];
}

main()
{
    int t,g,total,p;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>price[i]>>wight[i];
        cin>>g;
        total=0;
        for(int i=0;i<g;i++)
        {
            cin>>p;
            memset(dp,-1,sizeof(dp));
            total+=nap(0,0,p);
        }
        cout<<total<<endl;
    }
    return 0;
}
