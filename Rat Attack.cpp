#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>
#include<iomanip>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

#define f 1500
int a[5000][5000]={0};

main()
{
    int t,d,n,i,j,k,sx,sy,lx,ly,x,y,v,total,lt;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sx=sy=2000;
        lx=ly=0;
        lt=0;
        cin>>d>>n;
        for(j=0;j<n;j++)
        {
            cin>>x>>y>>v;
            a[x+f][y+f]=v;
            if(x<sx)
                sx=x;
            else if(x>lx)
                lx=x;
            if(y>ly)
                ly=y;
        }
        for(j=sx+f;j<=lx+f;j++)
        {
            for(k=f;k<=ly-d+f;k++)
            {
                total=a[(j-d)+f][k-d+f]+a[j-d+f][k+f]+a[j-d+f][k+d+f]+a[j+f][k-d+f]+a[j+f][f+k+d]+a[j-d+f][k+d+f]+a[j+d+f][k+f]+a[j+d+f][k+d+f];
                //cout<<a[j-d][k-d]<<' '<<a[j-d][k]<<' '<<a[j-d][k+d]<<' '<<a[j][k-d]<<' '<<a[j][k+d]<<' '<<a[j-d][k+d]<<' '<<a[j+d][k]<<' '<<a[j+d][k+d]<<endl;
                if(total>lt)
                    lt=total,x=j,y=k;
            }
        }
        printf("%d %d %d\n",x,y,lt);
    }
}




