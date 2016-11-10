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
    ull n,sum,t,lc,rc,b,i,j,k,maxsum,maxb;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=maxsum=b=0;
        cin>>lc;
        string city,osl[lc];
        int lv[lc];
        for(j=0;j<lc;j++)
        {
            cin>>city>>osl[j]>>lv[j];
        }
        cin>>rc;
        string osr[rc];
        int rv[rc];
        for(j=0;j<rc;j++)
        {
            cin>>city>>osr[j]>>rv[j];
        }
        k=0;
        for(j=0;j<lc;j++)
        {
            for(;k<rc;k++)
            {
                if(osl[j]==osr[k])
                {
                    if(lv)
                    {
                        sum=sum+lv[j]+rv[k],b++;
                        lv[j]=0;
                        break;
                    }
                }
            }
            if(maxsum<sum)
                maxsum=sum;
        }
        k=0;
        sum=b=0;
        for(lc--;lc>=0;lc--)
        {
            for(rc--;rc>=0;rc--)
            {
                if(osl[lc]==osr[rc])
                {
                    sum=sum+lv[lc]+rv[rc],b++;

                    break;
                }
            }
            if(maxsum<sum)
                maxsum=sum;
        }
        cout<<maxsum<<' '<<b<<endl;
    }
}




