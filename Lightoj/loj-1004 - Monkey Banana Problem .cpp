#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef long long int ll;

int n;
ll arr[210][210],dp[210][210];

ll solve(int row, int col)
{
    if(dp[row][col]!=-1)
        return dp[row][col];
    if(arr[row][col]==0)
        return dp[row][col]=0;
    if(row>=n)
        return dp[row][col]=arr[row][col]+max(solve(row+1,col),solve(row+1,col-1));
    else
        return dp[row][col]=arr[row][col]+max(solve(row+1,col),solve(row+1,col+1));
}

int main()
{
    int T,cs=0;
    cin>>T;
    while(T--)
    {
        cin>>n;
        memset(arr,0,sizeof(arr));
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<=n*2-1;i++)
        {
            for(int j=1;j<=(i<=n?i:2*n-i);j++)
                scanf("%lld",&arr[i][j]);
        }
        printf("Case %d: %lld\n",++cs,solve(1,1));
    }
    return 0;
}
