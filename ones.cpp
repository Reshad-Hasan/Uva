#include<iostream>
#include<cmath>
using namespace std;

main()
{
    int n,i,x;
    while(cin>>n)
    {
        x=i=1;
        while(x!=0)
        {
            x=(((x%n)*(10%n))%n+1)%n;
            i++;
        }
        cout<<i<<endl;
    }
}
