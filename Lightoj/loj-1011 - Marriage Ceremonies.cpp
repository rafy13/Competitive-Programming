#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef long long int ll;
int val[20][20],dp[20][1<<18],n;
int solve(int man,int msk)
{
    if(man==n)
        return 0;
    if(dp[man][msk]!=-1)
        return dp[man][msk];
    for(int i=0;i<n;i++)
    {
        if(!(msk&1<<i))
            dp[man][msk]=max(dp[man][msk],val[man][i]+solve(man+1,msk|1<<i));
    }
    return dp[man][msk];
}

int main()
{
    int T,cs=0;
    cin>>T;
    while(T--)
    {
        cin>>n;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>val[i][j];
        printf("Case %d: %d\n",++cs,solve(0,0));
    }
    return 0;
}
