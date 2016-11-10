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

main()
{
    int a[10000]={0},x[10000],y,z[10000],i,j,max=0;
    for(j=0;;j++)
    {
        if(scanf("%d %d %d",&x[j],&y,&z[j])!=3)
            break;
        for(i=x[j];i<z[j];i++)
        {
            if(a[i]<y)
                a[i]=y;
            if(max<z[j])
                max=z[j];
        }
    }
    int n;
    cout<<1<<' '<<a[1]<<' ';
    for(i=2,j=0;i<max;i++)
    {
        if(a[i]!=a[i-1])
            cout<<i<<' '<<a[i]<<' ';
       /* if(i>z[j])
        {
            if(z[j]<x[j+1])
                cout<<z[j]<<" 0 ";
            j++;
        }*/
    }
    cout<<max<<" 0"<<endl;
}



