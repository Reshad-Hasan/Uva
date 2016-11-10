#include<bits/stdc++.h>
using namespace std;

int dp[20][200],a[20],sum,n;

int knap(int i,int w)
{
    if(i==n)
    {
        if(w==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][w]!=-1)
        return dp[i][w];
    int pos1=0,pos2=0;
    if(w-a[i]>=0)
        pos1=knap(i+1,w-a[i]);
    pos2=knap(i+1,w);
    return dp[i][w]=pos1|pos2;
}

main()
{
    int t,i,j,num;
    cin>>t;
    getchar();
    string s;
    for(i=0;i<t;i++)
    {
        n=sum=0;
       // getchar();
        getline(cin,s);
        stringstream ss;
        ss<<s;
        while(ss>>a[n])
        {
            sum+=a[n];
            n++;
        }
        ss.clear();
        if(sum%2==0)
        {
            sum>>=1;
            memset(dp,-1,sizeof(dp));
            cout<<(knap(0,sum)?"YES\n":"NO\n");
        }
        else
            cout<<"NO\n";
    }
}
