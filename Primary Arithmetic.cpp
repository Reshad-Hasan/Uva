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

main()
{
    string n1,n2;
    int l1,l2,i,j,x,carry;
    while(1)
    {
        carry=0;
        cin>>n1>>n2;
        if(n1=="0" && n2 =="0")
            break;
        l1=n1.length();
        l2=n2.length();
        if(l1<l2)
        {
            swap(l1,l2);
            swap(n1,n2);
        }
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());
        for(i=0;i<l1;i++)
        {
            if(i<l2)
            {
                x=(n1[i]-'0')+(n2[i]-'0');
                if(x>9)
                    carry++,n1[i+1]++;
            }
            else
            {
                x=n1[i]-'0';
                if(x>9)
                    carry++,n1[i+1]++;
            }
        }
        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;
    }
}




