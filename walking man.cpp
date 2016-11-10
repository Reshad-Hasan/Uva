#include<iostream>
using namespace std;

int x=0;
void arrow()
{
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<"  O  "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" /|\\ "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<"/ | \\"<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" / \\ "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<"/   \\"<<endl;
}
void arrow2()
{
    for(int i=0;i<100;i++)
        cout<<"\n";
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" O "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" | "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" | "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" | "<<endl;
    for(int i=0;i<x;i++)
        cout<<' ';
    cout<<" | "<<endl;
}
main()
{
    for(int i=0;i<10000000;i++)
    {
        if(x<50)
        {
            if(i%2==0)
                arrow(),x++;
            else
                arrow2(),x++;
        }
        else
        {
            if(i%2==0)
                arrow(),x--;
            else
                arrow2(),x--;
        }
        for(int j=100000000;j>0;j--)
        {

        }
    }
}

