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
int graph[110][110];
void floyed()
{
    for(int k=1;k<=100;k++)
    {
        for(int i=1;i<=100;i++)
        {
            for(int j=1;j<=100;j++)
            {
                if(graph[i][j]>graph[i][k]+graph[k][j])
                    graph[i][j]=graph[i][k]+graph[k][j];
            }
        }
    }
}

double compute()
{
    double count=0,sum=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(graph[i][j]>0 && graph[i][j]<=100)
                count++,sum+=graph[i][j];
        }
    }
    return sum/count;
}

void init()
{
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(i==j)
                graph[i][j]=0;
            else
                graph[i][j]=10000;
        }
    }
}
int main()
{
    fast;
    int a,b;
    bool first=true;
    init();
    for(int cas=1;;)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            if(first)
                break;
            else
            {
                floyed();
                cout<<"Case "<<cas++<<": average length between pages = ";
                cout<<fixed<<setprecision(3)<<compute()<<endl;
                init();
            }
            first=true;
        }
        else
            first=false;
        graph[a][b]=1;
    }
}



