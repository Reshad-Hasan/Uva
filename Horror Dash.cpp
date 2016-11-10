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
    int t,i,n,max;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        max=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(max<a[j])
                max=a[j];
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
}




