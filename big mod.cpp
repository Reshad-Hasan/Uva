#include<iostream>
#include<cmath>
using namespace std;

typedef long int li;

li m;
li mod(li b,li p)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        //return ((mod(b,p/2)%m)*mod(b,p/2)%m)%m;
        return (li)pow(mod(b,p/2)%m,2)%m;
    }
    return (b%m*mod(b,p-1)%m)%m;
}

main()
{
    li b,p;
    while(cin>>b>>p>>m)
    {
        cout<<mod(b,p)<<endl;
    }
}
