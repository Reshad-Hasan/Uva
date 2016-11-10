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
    register int l,m,a,r,g,i,t,n,j,k;
    register string s;
    scanf("%d",&n);
    getchar();
    for(j=0;j<n;j++)
    {
        m=a=r=g=i=t=0;
        //scanf("%s",&s);
        cin>>s;
        l=s.length();
        for(k=0;k<l;k++)
        {
            if(s[k]=='M')
                m++;
            else if(s[k]=='A')
                a++;
            else if(s[k]=='R')
                r++;
            else if(s[k]=='G')
                g++;
            else if(s[k]=='I')
                i++;
            else if(s[k]=='T')
                t++;
        }
        r>>=1;
        a=a/3;
        int x=m;
        if(x>a)
            x=a;
        if(x>r)
            x=r;
        if(x>g)
            x=g;
        if(x>i)
            x=i;
        if(x>t)
            x=t;
        printf("%d\n",x);
    }
}




