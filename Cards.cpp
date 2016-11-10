#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>
#include<iomanip>
#include<vector>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

main()
{
    int n,i,l;
    vector<char>v;
    char a,b;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a,v.push_back(a);
    while(v.size()!=1)
    {
        l=v.size();
        a=v[l-1];
        b=v[l-2];
        if(a==b)
        {
            v.pop_back();
            v.pop_back();
            v.push_back(a);
        }
        else
        {
            if(a=='R' && b=='B' || a=='B' && b=='R')
            {
                v.pop_back();
                v.pop_back();
                v.push_back('G');
            }
            else if(a=='G' && b=='B' || a=='B' && b=='G')
            {
                v.pop_back();
                v.pop_back();
                v.push_back('R');
            }
            else
            {
                v.pop_back();
                v.pop_back();
                v.push_back('B');
            }
        }
    }
    cout<<v[0];
}




