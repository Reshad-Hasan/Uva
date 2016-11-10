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
    int sum,j,x,y,n,count=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            if(s[j]=='U')
                sum++;
            else if(s[j]=='D')
                sum--;
            else if(s[j]=='R')
                sum+=1000;
            else
                sum-=1000;
            if(sum==0)
                count++;
        }
    }
    cout<<count;
}




