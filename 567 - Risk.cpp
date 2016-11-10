#include<bits/stdc++.h>
using namespace std;
#define MAX 25
int bfs(vector<int> v[],int s,int d)
{
    int level[MAX];
    memset(level,-1,sizeof(level));
    queue<int>q;
    level[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int c=q.front();
        q.pop();
        for(int x:v[c])
        {
            if(x==d)
                return level[c]+1;
            if(level[x]==-1)
            {
                level[x]=level[c]+1;
                q.push(x);
            }
        }
    }
}
int main()
{
    vector<int> v[MAX];
    int n,i=1,t=1;
    while(cin>>n)
    {
        int x;
        while(n--)
        {
            cin>>x;
            v[i].push_back(x);
            v[x].push_back(i);
        }
        i++;
        if(i==20)
        {
            cin>>n;
            cout<<"Test Set #"<<t++<<endl;
            int s,d;
            while(n--)
            {
                cin>>s>>d;
                cout<<setw(2)<<right<<s<<" to ";
                cout<<setw(2)<<right<<d<<": "<<bfs(v,s,d)<<endl;
            }
            cout<<endl;
            for(int i=0;i<MAX;i++)
                v[i].clear();
            i=1;
        }

    }
}
