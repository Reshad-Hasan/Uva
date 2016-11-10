#include<iostream>
using namespace std;

void showflags()
{
   // ios::fmtflags f;
    long f=cout.flags();
    long i;
    for(i=16384;i;i=i>>1)
        if(i&f)
            cout<<"1 ";
        else cout<<"0 ";
    cout<<endl;
}

void setallflag()
{
    ios_base::fmtflags f,i=16384;
    for(;i;i>>=1)
        f=f|i;
    cout.flag(f);
}

main()
{
    showflags();
    setallflag();
    showflags();
}

