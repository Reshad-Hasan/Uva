#include<bits/stdc++.h>
using namespace std;
#define asgnarr(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define fast ios_base::sync_with_stdio(false)
#define loop(a,b) for(int i=a;i<b;i++)
#define mem(a,x) memset(a,x,sizeof(a))
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pll pair<long long,long long>
#define pls pair<long long,string>
#define pb push_back
#define all(v) v.begin(),v.end()

typedef long long lli;
typedef long li;
typedef unsigned long long ulli;
typedef unsigned long int uli;
typedef unsigned int ui;
typedef long double ld;

inline int iseven(int x){return x&1?0:1;}
inline bool is_double(double x){
    double y=x-(int)x;
    return (y==x?true:false);
}

double distance(int x,int y,int a,int b)
{
    return sqrt(pow(x-a,2)+pow(y-b,2));
}

int w[1010],s[1010];
int dir[1010];
int n,dp[1010];

int longest(int i)
{
    if(dp[i]!=-1)
        return dp[i];
    int max=0;
    for(int j=i+1;j<n;j++)
    {
        int x=0;
        if(w[i]<w[j] && s[i]>s[j])
            x=longest(j);
        if(x>max)
        {
            max=x;
            dir[i]=j;
        }
    }
    return dp[i]=max+1;
}

void printsolution(int i)
{
    if(dir[i]==-1)
        return;
    cout<<dir[i]+1<<endl;
    printsolution(dir[i]);
}
int main()
{
    fast;
    int a,b;
    n=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        w[n]=a,s[n]=b;
        n++;
    }
    int max=0,start;
    mem(dp,-1);
    mem(dir,-1);
    for(int i=0;i<n;i++)
    {
        int x=longest(i);
        if(x>max)
        {
            max=x;
            start=i;
        }
    }
    cout<<max<<endl;
    cout<<start+1<<endl;
    printsolution(start);
}
