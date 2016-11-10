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
    ull k,sum=0,t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s=="donate")
            cin>>k,sum+=k;
        else
            cout<<sum<<endl;
    }
}




