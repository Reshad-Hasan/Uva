#include<bits/stdc++.h>
using namespace std;
#define asgnarr(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define fast ios_base::sync_with_stdio(false)
#define loop(a,b) for(int i=a;i<b;i++)
#define mem(a,x) memset(a,x,sizeof(a))
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>

typedef long long lli;
typedef long li;
typedef unsigned long long ulli;
typedef unsigned long int uli;
typedef unsigned int ui;
typedef long double ld;

inline int iseven(int x){return x&1?0:1;}
inline bool is_int(double x)
{
    double y=x-(int)x;
    return (y==0?true:false);
}
int main()
{
    fast;
    int n,t=1;
    while(cin>>n,n)
    {
        map<string,vector<string>>graph;
        int node_count=0;
        string s,d;
        while(n--)
        {
            cin>>s>>d;
            if(graph[s].size()==0)
                node_count++;
            graph[s].push_back(d);
            if(graph[d].size()==0)
                node_count++;
            graph[d].push_back(s);
        }
        int b;
        while(cin>>s>>b)
        {
            if(s=="0" && b==0)
                break;
            if(graph[s].size()==0)
            {
                cout<<"Case "<<t++<<": "<<node_count;
                cout<<" nodes not reachable from node "<<s<<" with TTL = "<<b<<'.'<<endl;
                continue;
            }
            queue<psi>q;
            q.push(psi(s,b));
            int nr=0;
            map<string,bool>visited;
            visited[s]=true;
            while(!q.empty())
            {
                psi c=q.front();
                q.pop(),nr++;
                if(c.second==0)
                    break;
                for(string x:graph[c.first])
                {
                    if(visited[x]==false)
                    {
                        visited[x]=true;
                        q.push(psi(x,c.second-1));
                    }
                }
            }
            cout<<"Case "<<t++<<": "<<node_count-nr-q.size();
            cout<<" nodes not reachable from node "<<s<<" with TTL = "<<b<<'.'<<endl;
        }
    }
}
