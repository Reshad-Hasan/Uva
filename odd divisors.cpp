#include<iostream>
#include<cstring>
using namespace std;

typedef long int uli;

int dp[100005];

uli div(uli n)
{
    uli sum=1,i;
    for(i=3;i<=n;i=i+2)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}

main()
{
    uli t,l,r,j,sum;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    for(j=0;j<t;j++)
    {
        sum=0;
        cin>>l>>r;
        for(;l<=r;l++)
        {
            if(dp[l]!=-1)
                sum+=dp[l];
            else
                sum+=div(l);
        }
        cout<<sum<<endl;
    }
}
