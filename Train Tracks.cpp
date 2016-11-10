#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i,j,m,f;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,s);
        m=f=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='M')
                m++;
            else if(s[i]=='F')
                f++;
        }
        if(m==f && m!=1)
            cout<<"LOOP\n";
        else
            cout<<"NO LOOP\n";
    }
}
