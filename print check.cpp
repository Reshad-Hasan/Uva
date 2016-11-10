#include<iostream>
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

main()
{
    long long n,m,k,i,j,g,x,c,l;
    cin>>n>>m>>k;
    long long a[n][m]={0};
    for(l=0;l<k;l++)
    {
        cin>>g>>x>>c;
        if(g==1)
        {
            for(i=0;i<m;i++)
                a[x-1][i]=c;
        }
        else
        {
            for(i=0;i<n;i++)
                a[i][x-1]=c;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}



