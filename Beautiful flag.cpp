#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>
#include<iomanip>
#include<vector>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

int main()
{
    double x1,x2,y,t,i,r,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r;
        n=r/(double)20;
        x1=(double)55*n;
        x2=(double)45*n;
        y=(double)30*n;
        printf("Case %d:\n",i);
        printf("-%d %d\n",x2,y);
        printf("%d %d\n",x1,y);
        printf("%d -%d\n",x1,y);
        printf("-%d -%d\n",x2,y);
    }
}




