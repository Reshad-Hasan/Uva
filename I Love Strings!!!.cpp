#include<bits/stdc++.h>
using namespace std;

void create_prefix_array(string pat,int prefix[])
{
    int i,j;
    j=0,i=1;
    prefix[0]=0;
    while(i<pat.length())
    {
        if(pat[j]==pat[i])
        {
            prefix[i]=j+1;
            j++,i++;
        }
        else if(j==0)
            prefix[i++]=0;
        else
            j=prefix[j-1];
    }
}

int find_match(string text,string pat,int prefix[])
{
    create_prefix_array(pat,prefix);
    int m,n;
    m=text.length();
    n=pat.length();
    int i,j;
    i=j=0;
    while(i<m && j<n)
    {
        if(text[i]==pat[j])
        {
            i++,j++;
        }
        else if(j==0)
            i++;
        else
            j=prefix[j-1];
    }
    if(j==n)
        return 1;
    return 0;
}
int main()
{
    int n;
    string text,pat;
    int prefix[100000];
    cin>>n;
    getchar();
    while(n--)
    {
        cin>>text;
        int x;
        cin>>x;
        getchar();
        while(x--)
        {
            cin>>pat;
            int y;
            y=find_match(text,pat,prefix);
            cout<<(y?'y':'n')<<endl;
        }
    }
    return 0;
}
