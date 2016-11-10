#include<iostream>
#include<cmath>

using namespace std;

int is_prime(int a)
{
    int x=a/2;
    if(a<=2)
        return 1;
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
    cin>>n;
    while(n>=6)
    {
        x=1;
        for(int i=3;i<=n/2;i+=2)
        {
            if(is_prime(i) && is_prime(n-i))
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                x=0;
                break;
            }
        }
        if(x)
            cout<<"Goldbach's conjecture is wrong."<<endl;
        cin>>n;
    }
    return 0;
}
