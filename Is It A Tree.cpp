#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>tree;
    vector<pair<int,int>>::iterator it,p;
    int f,s;
    for(int i=1;cin>>f>>s,f>=0 && s>=0;)
    {
        if(f==0 && s==0)
        {
            int root_count=0,r;
            bool child;
            for(it=tree.begin();it!=tree.end();it++)
            {
                child=true;
                int child_count=0;
                bool root=true;
                for(p=tree.begin();p!=tree.end();p++)
                {
                    if(it->second == p->second)
                        child_count++;
                    if(child_count==2)
                    {
                        child=false;
                        break;
                    }
                    if(it->first == p->second && it!=p)
                        root=false;
                }
                if(root)
                {
                    root_count++;
                    if(root_count==1)
                        r=it->first;
                    else if(root_count>1)
                    {
                        if(r==it->first)
                            root_count--;
                    }
                }
                if(!child)
                    break;
            }
            if(child && root_count==1 || tree.size()==0)
                cout<<"Case "<<i++<<" is a tree."<<endl;
            else
                cout<<"Case "<<i++<<" is not a tree."<<endl;
            tree.clear();
        }
        else
            tree.push_back(pair<int,int>(f,s));
    }
}
