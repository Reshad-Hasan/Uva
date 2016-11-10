#include<iostream>
#include<cstring>
using namespace std;

int coins[]={50,25,10,5,1};
long int dp[6][7499],make;

long int change(int i,int t)
{
    if(i>=5)
    {
        if(t==0)
            return 1;
        else return 0;
    }
    if(dp[i][t]!=-1)
        return dp[i][t];
    int pos1=0,pos2=0;
    if(t-coins[i]>=0)
        pos1=change(i,t-coins[i]);
    pos2=change(i+1,t);
    return dp[i][t]=pos1+pos2;
}

main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        cout<<change(0,make)<<endl;
    }
}
