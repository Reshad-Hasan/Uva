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
    int t,n;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        n=0;
        cin>>s;
        if(s.length()==3)
        {
            if(s[0]=='o')
                n++;
            if(s[1]=='n')
                n++;
            if(s[2]=='e')
                n++;
            if(n>=2)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
            cout<<3<<endl;
    }
}




