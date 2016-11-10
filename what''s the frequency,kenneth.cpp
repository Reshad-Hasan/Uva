#include<bits/stdc++.h>
using namespace std;

int main()
{
    string v;
    int max,count;
    while(getline(cin,s))
    {
        max=0;
        count=1;
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
            else
            {
                if(count>max)
                {
                    max=count;
                    v.clear();
                    count=0;
                }
                else if(count==max)
                {
                    v.insert(s[i]);
                }
            }
        }
        cout<<v<<' '<<max<<endl;
    }
}
