#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        stringstream ss;
        ss<<s;
        char ch;
        s.clear();
        while(ss>>ch)
        {
            if(ch>='A' && ch<='Z')
                ch='a'-'A'+ch;
            if(ch>='a' && ch<='z')
                s+=ch;
        }
        int l=s.length();
        bool pal=true;
        for(int i=0,j=l-1;i<l>>2;i++,j--)
        {
            if(s[i]!=s[j])
            {
                pal=false;
                break;
            }
        }
        if(pal)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }
}
