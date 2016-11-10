#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,n,count;
    while(cin>>w>>h>>n)
    {
        if(!w && !h && !n)
            break;
        int seat[w][h];
        memset(seat,0,sizeof(seat));
        count=0;
        while(n--)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            int x1,y1,x2,y2;
            if(a>c)
                x1=c,x2=a;
            else
                x1=a,x2=c;
            if(b>d)
                y1=d,y2=b;
            else
                y1=b,y2=d;
            for(int i=x1-1;i<x2;i++)
            {
                for(int j=y1-1;j<y2;j++)
                    seat[i][j]=1;
            }
        }
        for(int i=0;i<w;i++)
        {
            for(int j=0;j<h;j++)
            {
                if(seat[i][j]==0)
                    count++;
            }
        }
        if(count==0)
            cout<<"There is no empty spots.\n";
        else if(count==1)
            cout<<"There is one empty spot.\n";
        else
            cout<<"There are "<<count<<" empty spots.\n";
    }
}
