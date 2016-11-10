#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,o;
    char s[3][3];
    cin>>n;
    getchar();
    bool XXX,OOO;
    for(int i=0;i<n;i++)
    {
        x=o=0;
        XXX=false;
        OOO=false;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                cin>>s[j][k];
                if(s[j][k]=='X')
                    x++;
                else if(s[j][k]=='O')
                    o++;
            }
        }
        for(int j=0;j<3;j++)
        {
            if(s[j][0]==s[j][1] && s[j][1]==s[j][2])
                if(s[j][0]=='X')
                    XXX=true;
                else if(s[j][0]=='O')
                    OOO=true;
            if(s[0][j]==s[1][j] && s[1][j]==s[2][j])
                if(s[0][j]=='X')
                    XXX=true;
                else if(s[0][j]=='O')
                    OOO=true;
        }
        if(s[0][0]==s[1][1] && s[1][1]==s[2][2])
            if(s[0][0]=='X')
                    XXX=true;
                else if(s[0][0]=='O')
                    OOO=true;

        if(s[0][2]==s[1][1] && s[1][1]==s[2][0])
            if(s[0][2]=='X')
                    XXX=true;
                else if(s[0][2]=='O')
                    OOO=true;
        if(!XXX && !OOO)
        {
            cout<<(x==o || x-1==o?"yes":"no");
        }
        else
        {
            if(XXX && OOO)
                cout<<"no";
            else if(XXX)
                cout<<(x-1==o?"yes":"no");
            else if(OOO)
                cout<<(x==o?"yes":"no");
        }
        cout<<endl;
    }
    return 0;
}
