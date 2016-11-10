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
    int t,i,j,k,l1,l2;
    string to,jv;
    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        getline(cin,to);
        getline(cin,jv);
        l1=to.length();
        l2=jv.length();
        char s[l2];
        if(l1==l2)
        {
            if(to==jv)
                printf("Case %d: Yes\n",i);
            else
                printf("Case %d: Wrong Answer\n",i);
        }
        else
        {
            for(j=k=0;j<l1;j++)
            {
                if(to[j]!=' ')
                    s[k]=to[j],k++;
            }
            s[k]='\0';
            if(l2==k)
            {
                if(s==jv)
                    printf("Case %d: Output Format Error\n",i);
                else
                    printf("Case %d: Wrong Answer\n",i);
            }
            else
                printf("Case %d: Wrong Answer\n",i);
        }
    }
    return 0;
}




