    #include<bits/stdc++.h>
    using namespace std;
    #define MAX 1000000


    void sieve(int primes[])
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
        int primes[MAX];
        long int n,m,x;
        sieve(primes);
        while(cin>>n)
        {
            x=n;
            bool prime=false,emirp=false;
            cout<<n;
            if(primes[n])
                prime=true;
            if(prime)
            {
                m=0;
                while(n>0)
                {
                    m=(m*10)+(n%10);
                    n/=10;
                }
                if(x!=m)
                    if(primes[m])
                        emirp=true;
            }
            if(emirp)
                cout<<" is emirp.\n";
            else if(prime)
                cout<<" is prime.\n";
            else
                cout<<" is not prime.\n";
        }
        return 0;
    }
