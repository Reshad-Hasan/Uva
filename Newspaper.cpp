#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,i,j,v,pay;
    char ch;
    string str;
    map<char,int>letters;
    cin>>n;
    while(n--)
    {
        pay=0;
        cin>>k;
        while(k--)
        {
            cin>>ch>>v;
            letters.insert(pair<char,int>(ch,v));
        }
        cin>>k;
        getchar();
        while(k--)
        {
            getline(cin,str);
            for(i=0;i<str.length();i++)
            {
                pay+=letters[str[i]];
            }
        }
        cout<<fixed<<setprecision(2);
        cout<<pay/100.0<<'$'<<endl;
        letters.clear();
    }
}
