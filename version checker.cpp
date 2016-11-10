#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a;
    else if(a<b)
        cout<<b;
    else
        cout<<(a.length()>b.length()?a:b);
}
