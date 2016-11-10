#include<bits/stdc++.h>
using namespace std;
#define asgnarr(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define fast ios_base::sync_with_stdio(false)
#define loop(a,b) for(int i=a;i<b;i++)
#define mem(a,x) memset(a,x,sizeof(a))
#define pii pair<int,int>

typedef long long lli;
typedef long li;
typedef unsigned long long ulli;
typedef unsigned long int uli;
typedef unsigned int ui;
typedef long double ld;

inline int iseven(int x){return x&1?0:1;}

int main()
{
    fast;
    int n;
    bool f=false;
    while(cin>>n)
    {
        if(f)
            cout<<endl;
        f=true;
        vector<int>graph[2*n+1];
        map<string,int>si;
        map<int,string>is;
        string s,d;
        int a,b,j=1;
        loop(0,n)
        {
            cin>>s>>d;
            if(si[s]==0)
            {
                is[j]=s;
                si[s]=j;
                j++;
            }
            a=si[s];
            if(si[d]==0)
            {
                is[j]=d;
                si[d]=j;
                j++;
            }
            b=si[d];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        cin>>s>>d;
        a=si[s],b=si[d];
        if(a==0 || b==0)
        {
            cout<<"No route"<<endl;
            continue;
        }
        if(s==d)
        {
            cout<<s<<' '<<d<<endl;
            continue;
        }
        int level[2*n+10];
        mem(level,-1);
        level[a]=0;
        map<int,int> parent;
        parent[a]=0;
        queue<int>q;
        q.push(a);
        while(!q.empty())
        {
            int c=q.front();
            q.pop();
            for(int x:graph[c])
            {
                if(level[x]==-1)
                {
                    int m;
                    m=level[x]=level[c]+1;
                    parent[x]=c;
                    q.push(x);
                }
            }
        }
        if(level[b]==-1)
            cout<<"No route"<<endl;
        else
        {
            vector<int> v;
            while(b!=a && b!=0)
            {
                v.push_back(b);
                b=parent[b];
                v.push_back(b);
            }
            for(int it=v.size()-1;it>=0;it--)
            {
                cout<<is[v[it]]<<' ';
                it--;
                cout<<is[v[it]]<<endl;
            }
        }
    }
}

