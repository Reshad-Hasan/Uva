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


#define MAX 20000001
int main()
{
    fast;
    vector<int > v;
    for(int i=0;i<MAX;i++)
        v.pb(1);
    for(int i=2;i<MAX;i++)
    {
        for(int j=i;j<MAX;j+=i)
        {
            v[j]+=i;
        }
    }
    int n;
    while(cin>>n,n!=0)
    {
        lli sum=0;
        for(int i=2;i<=n;i++)
            sum+=v[i];
        cout<<sum<<endl;
    }
}



