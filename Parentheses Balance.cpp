#include<bits/stdc++.h>
using namespace std;
#define asgnarr(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define fast ios_base::sync_with_stdio(false)
#define loop(a,b) for(int i=a;i<b;i++)

typedef long long lli;
typedef long li;
typedef unsigned long long ulli;
typedef unsigned long int uli;
typedef unsigned int ui;
typedef long double ld;

inline int iseven(int x){return x&1?0:1;}

int main()
{
    fast;
    map<char,int>mp;
    mp['(']=1;
    mp[')']=-1;
    mp['[']=2;
    mp[']']=-2;
    int n;
    cin>>n;
    char c;
    cin.ignore();
    string s;
    while(n--)
    {
        getline(cin,s);
        stack<char>stk;
        bool yes=true;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[')
                stk.push(s[i]);
            else
            {
                if(stk.size()==0)
                {
                    yes=false;
                    break;
                }
                char ch=stk.top();
                stk.pop();
                if(mp[ch]+mp[s[i]]!=0)
                {
                    yes=false;
                    break;
                }
            }
        }
        if(stk.size()!=0)
            yes=false;
        cout<<(yes?"Yes":"No")<<endl;
    }
}
