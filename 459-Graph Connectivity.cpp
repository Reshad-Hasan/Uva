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

map<char,char>par;

char findpar(char a)
{
    if(par[a]==a)
        return a;
    return a=findpar(par[a]);
}
int main()
{
    int t;
    cin>>t;
    bool first=true;
    while(t--)
    {
        if(first==false)
            cout<<endl;
        first=false;
        char n;
        cin>>n;
        for(char i='A';i<=n;i++)
            par[i]=i;
        string s;
        getchar();
        while(getline(cin,s) && s!="")
        {
            char a,b;
            a=findpar(s[0]);
            b=findpar(s[1]);
            par[a]=b;
        }
        map<char,bool> roots;
        for(char i='A';i<=n;i++)
            roots[findpar(i)]=true;
        int count=0;
        for(char i='A';i<=n;i++)
        {
            if(roots[i])
                count++;
        }
        cout<<count<<endl;
        map<char,char> temp;
        par=temp;
    }
}



