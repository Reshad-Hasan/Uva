#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

stack<int>stk;
queue<int>qu;
priority_queue<int>pqu;

main()
{

    int n;
    while(cin>>n)
    {
        bool s,p,q;
        s=p=q=true;
        int c,v;
        for(int i=0;i<n;i++)
        {
            cin>>c>>v;
            if(c==1)
            {
                stk.push(v);
                qu.push(v);
                pqu.push(v);
            }
            else
            {
                if(stk.empty())
                {
                    s=q=p=false;
                    break;
                }
                if(stk.top()!=v)
                    s=false;
                if(qu.front()!=v)
                    q=false;
                if(pqu.top()!=v)
                    p=false;
                stk.pop();
                qu.pop();
                pqu.pop();
            }
        }
        if(s && p || p && q || q && s)
            cout<<"not sure";
        else if(s)
            cout<<"stack";
        else if(p)
            cout<<"priority queue";
        else if(q)
            cout<<"queue";
        else
            cout<<"impossible";
        cout<<endl;
        stack<int>t1;
        stk=t1;
        queue<int>t2;
        qu=t2;
        priority_queue<int>t3;
        pqu=t3;
    }
}
