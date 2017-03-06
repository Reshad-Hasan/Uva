#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

int main()
{
    register int h1,m1,h2,m2;
    while(1)
    {
        cin>>h1>>m1>>h2>>m2;
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        if(m2<m1)
            m2+=60,h1++;
        m2-=m1;
        if(h1>h2)
            h2+=24;
        h2-=h1;
        cout<<(h2*60)+m2<<endl;
    }
    return 0;
}



