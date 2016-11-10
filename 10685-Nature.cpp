#include<bits/stdc++.h>
using namespace std;
#define asgnarr(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define fast ios_base::sync_with_stdio(false)
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


map<string,string> par;

string findpar(string s)
{
    if(par[s]==s)
        return s;
    string x=par[s];
    return par[s]=findpar(x);
}
int main()
{
    fast;
    int c,r;
    ofstream out("G:\\ab.txt");
    while(cin>>c>>r)
    {
        string a;
        if(c==0 && r==0)
            break;
        vector<string >v;
        for(int i=0;i<c;i++)
        {
            cin>>a;
            par[a]=a;
            v.pb(a);
        }
        string b,x,y;
        for(int i=0;i<r;i++)
        {
            cin>>a>>b;
            x=findpar(a);
            y=findpar(b);
            par[y]=x;
        }
        map<string,int> mp;
        for(int i=0;i<v.size();i++)
        {
            mp[findpar(v[i])]++;
        }
        int max=0;
        for(int i=0;i<v.size();i++)
        {
            if(mp[v[i]]>max)
                max=mp[v[i]];
        }
        cout<<max<<endl;
        out<<max<<endl;
        map<string,string> temp;
        par=temp;
    }
    out.close();
}



