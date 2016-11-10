#include<iostream>
#include<cmath>

using namespace std;

int is_prime(int a)
{
    if(a==2)
        return 1;
    else if(a%2==0)
        return 0;
    int x=a/2;
    for(int i=3;i<=x;i+=2)
    {
        if(a%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    unsigned long n,x;
    while(cin>>n)
    {
        if(n==0)
            break;
        x=1;
        if(is_prime(n-2))
        {
            cout<<n<<":\n";
            cout<<2<<'+'<<n-2;
            x=0;
        }
        if(x)
        {
            for(int i=3;i<=n/2;i+=2)
            {
                if(is_prime(i) && is_prime(n-i))
                {
                    cout<<n<<":\n";
                    cout<<i<<'+'<<n-i<<endl;
                    x=0;
                    break;
                }
            }
        }
        if(x)
        {
            cout<<n<<":\n";
            cout<<"NO WAY!\n";

        }
    }
    return 0;
}
