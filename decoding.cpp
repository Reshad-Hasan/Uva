#include<iostream>
#include<string>
using namespace std;

main()
{
    int t,i,n,j,k;
    string s;
    char ch;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        cout<<"Case "<<i<<": ";
        ch=s[0];
        n=0;
        for(j=1;j<s.length();j++)
        {
            if(s[j]>='0' && s[j]<='9')
                n=(n*10)+(s[j]-'0');
            else
            {
                for(k=0;k<n;k++)
                    cout<<ch;
                ch=s[j];
                n=0;
            }
        }
        for(k=0;k<n;k++)
            cout<<ch;
        cout<<endl;
    }
}
