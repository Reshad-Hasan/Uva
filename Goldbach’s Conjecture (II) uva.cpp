#include<bits/stdc++.h>
using namespace std;
#define MAX 40000

int primes[MAX];

void sieve()
{
    for(int i=1;i<MAX;i++)
    {
        primes[i]=i;
    }
    for(int i=2;i<MAX;i++)
    {
        if(primes[i])
        {
            for(int j=primes[i]<<1;j<MAX;j+=primes[i])
            {
                primes[j]=0;
            }
        }
    }
}

int main()
{
    long int n,x;
    sieve();
    while(cin>>n,n)
    {
        int count=0;

        for(int i=2;i<MAX;i++)
        {
            if(primes[i])
            {
                x=n-primes[i];
                if(x<primes[i])
                    break;
                if(primes[x])
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}

