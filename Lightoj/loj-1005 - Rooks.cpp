#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll dp[40][40];

void process()
{
    memset(dp,0,sizeof(dp));
    for(int i=0;i<35;i++)
        dp[i][0]=1;
    for(int i=1;i<35;i++)
        for(int j=1;j<=i;j++)
            dp[i][j]=(dp[i-1][j]+dp[i-1][j-1]);
}

int main()
{
    int T,cs=0;
    ll n,k;
    ll npk,nck,ans;
    process();
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        if(k>n)
        {
            printf("Case %d: 0\n",++cs);
            continue;
        }
        npk=1;
        for(int i=n;i>n-k;i--)
            npk*=i;
        nck=dp[n][k];
        ans=npk*nck;
        printf("Case %d: %lld\n",++cs,ans);

    }
    return 0;
}
