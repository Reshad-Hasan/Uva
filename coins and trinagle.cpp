#include<bits/stdc++.h>
using namespace std;

main()
{

long long t,n;
    int i,count,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        count=0;
        cin>>n;
        j=1;
        while(1)
        {
            n-=j++;
            if(n<0)
                break;
        }
        cout<<j-2<<endl;
    }
}
