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
    string s1,s2;
    int l1,l2,i,j,count;
    while(cin>>s1>>s2)
    {
        count=0;
        l1=s1.length();
        l2=s2.length();
        if(l1<=l2)
        {
            for(i=j=0;i<l1&&j<l2;j++)
            {
                if(s1[i]==s2[j])
                    i++,count++;
            }
            if(count==l1)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
}




