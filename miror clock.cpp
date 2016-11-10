#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

main()
{
    register int h,m,t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        scanf("%d:%d",&h,&m);
        if(m!=0)
            m=60-m,h++;
        if(h>12)
            h=24-h;
        else if(h!=12 && h!=6)
            h=12-h;

        printf("%02d:%02d\n",h,m);
    }
}




