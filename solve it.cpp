#include<bits/stdc++.h>
using namespace std;
#define esp 1e-7
int main()
{
    int p,q,r,s,t,u;
    float high,low,mid,x;
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        low=0,high=1;
        bool flag=false;
        while(low<high)
        {
            mid=(low+high)/2;
            x=p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*mid*mid+u;
            if(x<esp && x>0 || x>-esp && x<0)
            {
                flag=true;
                break;
            }
            if(x>0)
                low=mid;
            else
                high=mid;
        }
        if(flag)
            cout<<fixed<<setprecision(4)<<mid<<endl;
        else
            cout<<"No solution"<<endl;
    }
}
