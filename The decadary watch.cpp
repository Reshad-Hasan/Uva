#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long int h,m,ss,c;
    while(cin>>s)
    {
        long int milis;
        long double x;
        h=((s[0]-48)*10)+ s[1]-48;
        m=((s[2]-48)*10)+ s[3]-48;
        ss=((s[4]-48)*10)+ s[5]-48;
        c=((s[6]-48)*10)+ s[7]-48;
        milis=(h*360000)+(m*6000)+(ss*100)+c;

        milis=milis*125/108;
        cout<<setw(7)<<setfill('0');
        cout<<milis<<endl;
    }
}
