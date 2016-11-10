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
inline bool is_double(double x){
    double y=x-(int)x;
    return (y==x?true:false);
}

int main()
{
    int n;
    char ch;
    cin>>n;
    bool first=false;
    while(n--)
    {
        if(first)
            cout<<endl;
        first=true;
        string x;
        vector<string>v;
        while(cin>>x,x!="*")
        {
            v.push_back(x);
        }
        getchar();
        while(1)
        {
            string d,s;
            getline(cin,s);
            stringstream ss;
            ss<<s;
            ss>>s;
            ss>>d;
            if(s.length()==0 && d.length()==0)
                break;
            queue<string>q;
            map<string,int>level;
            map<string,int>visited;
            visited[s]=1;
            level[s]=0;
            q.push(s);
            while(!q.empty())
            {
                string c=q.front();
                q.pop();
                int l=c.length();
                bool found=false;
                for(string x:v)
                {
                    if(visited[x]==0)
                    {
                        if(x.length()==l)
                        {
                            int count=0;
                            for(int i=0;i<l;i++)
                            {
                                if(x[i]!=c[i])
                                    count++;
                                if(count>1)
                                    break;
                            }
                            if(count==1)
                            {
                                visited[x]=1;
                                level[x]=level[c]+1;
                                q.push(x);
                                if(x==d)
                                {
                                    found=true;
                                    break;
                                }
                            }
                        }
                    }
                }
                if(found)
                    break;
            }
            cout<<s<<' '<<d;
            cout<<' '<<level[d]<<endl;
        }

    }
}

