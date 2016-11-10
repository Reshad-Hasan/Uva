#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    int n=0,x,i,l,p=0,m=0;
    getline(cin,s);
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
            n=(n*10)+(s[i]-'0');
        else if(s[i]=='+')
            p++;
        else if(s[i]=='-')
            m++;
    }
    x=n-p+m;
    if(x>n || x==0)
        cout<<"Impossible\n";
    else
    {
        cout<<"Possible\n";
        cout<<x;
        for(i=1;i<l;i++)
        {
            if(s[i]=='?')
                cout<<1;
            else
                cout<<s[i];
        }
    }
}
