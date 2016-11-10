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
    int n,l;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        l=s.length();
        if(l==1 || l==2)
            cout<<'+'<<endl;
        else if(s[l-2]=='3' && s[l-1]=='5')
            cout<<'-'<<endl;
        else if(s[0]=='9' && s[l-1]=='4')
            cout<<'*'<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<'?'<<endl;
    }
}




