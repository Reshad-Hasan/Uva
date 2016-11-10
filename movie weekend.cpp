#include<iostream>
using namespace std;

main()
{
    int t,n,index,mul,x,i,j,l[100],r[100];
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        mul=0;
        for(i=0;i<n;i++)
            cin>>l[i];
        for(i=0;i<n;i++)
        {
            cin>>r[i];
            x=l[i]*r[i];
            if(x>mul)
            {
                mul=x;
                index=i;
            }
            else if(x==mul)
            {
                if(r[i]>r[index])
                {
                    mul=x;
                    index=i;
                }
            }
        }
        cout<<index+1<<endl;
    }
}
