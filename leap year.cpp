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

main()
{
    string y;
    int x,mod4,mod100,mod400,mod15,mod55,l,i,ly,hf,bf;
    bool n=false;
    while(cin>>y)
    {

        bool f=false;
        mod4=mod100=mod400=mod15=mod55=ly=hf=bf=0;
        l=y.length();
        for(i=0;i<l;i++)
        {
            x=y[i]-'0';
            mod4=((mod4*10)+x)%4;
            mod100=((mod100*10)+x)%100;
            mod400=((mod400*10)+x)%400;
            mod15=((mod15*10)+x)%15;
            mod55=((mod55*10)+x)%55;
        }
        if(n==false)
             n=true;
        else
            printf("\n");
        if(mod4==0 && mod100!=0 || mod400==0)
        {
            printf("This is leap year.\n"),f=true;
            if(mod55==0)
                bf=1;
        }
        if(mod15==0)
            printf("This is huluculu festival year.\n"),f=true;
        if(bf==1)
            printf("This is bulukulu festival year.\n"),f=true;
        if(f==false)
            printf("This is an ordinary year.\n");

    }
}



