#include<iostream>
#include<iomanip>
#include<cmath>

#define pi 3.1416
using namespace std;

double area(double r)
{
    return pi*r*r;
}


int main()
{
    cout<<fixed;
    cout<<setprecision(4);
    double a,b,c,barea,sarea,s,tarea;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        tarea=sqrt(s*(s-a)*(s-b)*(s-c));
        barea=area((a*b*c)/(4*tarea));
        sarea=area(tarea/s);
        barea=barea-tarea;
        cout<<barea<<' '<<tarea-sarea<<' '<<sarea<<endl;
    }
}
