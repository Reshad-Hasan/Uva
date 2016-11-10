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

int main()
{
    fast;
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        vector<vector<int>> graph(n+1);
        map<int,int> mp;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            graph[a].pb(b);
            mp[b]++;
        }
        bool f=false;
        for(int i=0;i<n;i++)
        {
//            if(f)
//                cout<<' ';
//            f=true;
            int min=m+100;
            mp[min]=m+1000;

            for(int j=1;j<=n;j++)
            {
                if(mp[j]<mp[min] && mp[j]!=-1)
                    min=j;
            }
            for(int x:graph[min])
            {
                mp[x]--;
            }
            mp[min]=-1;
            cout<<min<<' ';
        }
        cout<<endl;
    }
}



