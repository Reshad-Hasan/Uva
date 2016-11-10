#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    for(int i=1;1;i++)
    {
        cin>>s;
        if(s=="*")
            break;
        else if(s=="Hajj")
            cout<<"Case "<<i<<": Hajj-e-Akbar\n";
        else
            cout<<"Case "<<i<<": Hajj-e-Asghar\n";
    }
}
