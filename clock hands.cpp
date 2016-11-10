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
    double h,m,d;
    while(scanf("%lf:%lf",&h,&m))
    {
        if(h==0 && m==0)
            break;
        d=((h*60)-(11*m))*.5;
        if(d<0)
            d*=-1;
        //cout<<d<<endl;
        if(d>180)
        {
            abs(d);
            d=360-d;
        }
        cout<<fixed;
        cout<<setprecision(3);
        cout<<d<<endl;
    }
}





