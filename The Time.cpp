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
    li h,m;
    li x;
    scanf("%ld:%ld",&h,&m);
    cin>>x;
    m+=x;
    h+=m/60;
    m%=60;
    if(h>23)
        h%=24;
    if(m>59)
        m%=60,h++;
    printf("%02ld:%02ld",h,m);
}
