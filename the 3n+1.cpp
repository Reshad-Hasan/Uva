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
    int i,j,a,b,count,maxcount;
    while(cin>>a>>b)
    {
        maxcount=0;
        i=a,j=b;
        if(i>j)
            swap(i,j);
        for(;i<=j;i++)
        {
            count=1;
            int x=i;
            while(x!=1)
            {
                if(x%2==1)
                    x=3*x+1;
                else
                    x>>=1;
                count++;
            }
            if(maxcount<count)
                maxcount=count;
        }
        cout<<a<<' '<<b<<' '<<maxcount<<endl;
    }
}




