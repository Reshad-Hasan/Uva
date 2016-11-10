#include<bits/stdc++.h>

using namespace std;

long long a, b, c, d, e, f;
long long dp[10010];
int fn( int n ) {
    if(dp[n]!=-1)
        return dp[n];
    dp[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )%10000007;
    return dp[n];
}
int main() {
    long long n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp,-1,sizeof(dp));
        dp[0]=a,dp[1]=b,dp[2]=c,dp[3]=d,dp[4]=e,dp[5]=f;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
