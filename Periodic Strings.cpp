#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i,j,index;
    bool period;
    bool notfirst=false;
    while(cin>>str,str!=".")
    {
        string s;
        for(i=0;i<str.length();i++)
        {
            s+=str[i];
            period=true;
            index=0;
            for(j=i+1;j<str.length();j++)
            {
                if(s[index++]!=str[j])
                {
                    period=false;
                    break;
                }
                if(index>i)
                    index=0;
            }
            if(index!=0)
                period=false;
            if(period)
                break;
        }
        cout<<str.length()/(i+1)<<endl;
    }
}
