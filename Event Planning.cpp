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
    ull n,b,h,w,i,j,p,pri,min,f;
    while(cin>>n>>b>>h>>w)
    {
        f=0;
        min=1000000000;
        if(n==0 || b==0 || h==0 || w==0)
            continue;
       for(i=0;i<h;i++)
       {
           cin>>p;
           pri=p*n;
           int a[w];
           for(j=0;j<w;j++)
           {
               cin>>a[j];
               if(f==0 && a[j]>=n && pri<=b)
               {
                   f=1;
               }
           }
           if(f==1 && min>pri)
            min=pri;
       }
       if(f)
            cout<<min<<endl;
       else
        cout<<"stay home"<<endl;
    }
}




