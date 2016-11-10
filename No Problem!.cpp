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
    int n,a[12],r[12],i,j;
    for(j=1;cin>>n;j++)
    {
        if(n<0)
            break;
        for(i=0;i<12;i++)
            cin>>a[i];
        for(i=0;i<12;i++)
            cin>>r[i];
        printf("Case %d:\n",j);
        for(i=0;i<12;i++)
        {
            if(r[i]<=n)
            {
                printf("No problem! :D\n");
                n-=r[i];
            }
            else
                printf("No problem. :(\n");
            n+=a[i];
        }
    }
}




