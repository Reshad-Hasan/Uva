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


int upper_bound(vector<int> v,int x)
{
    int low=0,high=v.size()-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(v[mid]>x)
            high=mid-1;
        else if(v[mid]<x)
            low=mid+1;
        else
            return mid+1;
    }
    return low;
}

int main()
{
    int t;
    cin>>t;
    ofstream file("G:\\abc.txt");
    while(t--)
    {
        vector<int>out,not_out;
        int a,b;
        char ch;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b>>ch;
            if(b==0 && ch=='i')
                not_out.pb(a);
            else if(b==1 && ch=='c')
                out.pb(a);
        }
        sort(all(out));
        int sum=0,remember[15];
        mem(remember,-1);
        remember[10]=0;
        for(int x:not_out)
        {
            if(remember[x]!=-1)
                sum+=remember[x];
            else
            {
                int z=upper_bound(out,x);
                while(x==out[z])
                    z++;
                z=out.size()-z;
                sum+=z;
                remember[x]=z;
            }
        }
        file<<sum<<endl;
        cout<<sum<<endl;
    }
}



