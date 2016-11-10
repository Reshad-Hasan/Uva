#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>
#include<iomanip>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

int main()
{
    string n;
    int l,m,i;
    while(1)
    {
        m=0;
        cin>>n;
        if(n=="0")
            break;
        l=n.length();
        for(i=0;i<l;i++)
        {
           m=((m*10)+(n[i]-'0'))%17;
        }
        m==0?printf("1\n"):printf("0\n");
    }
    return 0;
}




