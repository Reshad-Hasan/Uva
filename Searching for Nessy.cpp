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
    int n,m,t,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        n-=2,m-=2;
        x=n/3;
        if(n%3!=0)
            x++;
        y=m/3;
        if(m%3!=0)
            y++;
        cout<<x*y<<endl;
    }
}




