#include<bits/stdc++.h>
using namespace std;

int num;
void marge(int a[],int low,int mid,int high);

void margesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        margesort(a,low,mid);
        margesort(a,mid+1,high);
        marge(a,low,mid,high);
    }
}

void marge(int a[],int low,int mid,int high)
{
    int n=high-low+1;
    int c[n],index=0,l=low,r=mid+1;
    for(;index<n && l<=mid && r<=high;index++)
    {
        c[index]=(a[l]<a[r]?a[l++]:a[r++],num++);
    }
    if(l<=mid)
    {
        while(l<=mid)
            c[index++]=a[l++];
    }
    if(r<=high)
    {
        while(r<=high)
            c[index++]=a[r++];
    }
    l=low;
    for(index=0;index<n;index++)
    {
        a[low++]=c[index];
    }
}
int main()
{
    int n;
    while(cin>>n,n)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        num=0;
        margesort(a,0,n-1);
        cout<<num<<endl;
    }

}
