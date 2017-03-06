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
#define inf 1000000

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

int main()
{
    fast;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,e;
        scanf("%d %d",&n,&e);
        int cost[n][n];
        vector<int>graph[n];
        int d[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cost[i][j]=inf;
            d[i]=inf;
        }
        d[0]=0;
        for(int i=0;i<e;i++)
        {
            int u,v,c;
            scanf("%d %d %d",&u,&v,&c);
            cost[u][v]=c;
            graph[u].pb(v);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int x:graph[j])
                {
                    if(d[j]+cost[j][x]<d[x])
                        d[x]=d[j]+cost[j][x];
                }
            }
        }
        bool cycle=false;
        for(int i=0;i<n;i++)
        {
            for(int x:graph[i])
            {
                if(d[i]+cost[i][x]<d[x])
                {
                    cycle=true;
                    break;
                }
            }
        }
        printf("%s\n",(cycle?"possible":"not possible"));
    }

}
