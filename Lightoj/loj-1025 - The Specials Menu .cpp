#include<bits/stdc++.h>
using namespace std;


int dp[80][80];
char str[80];
int solve(int l,int r)
{
    //cout<<"here"<<endl;
    if(dp[l][r]!=-1)
        return dp[l][r];
    if(l>r)
        return 0;
    if(l==r)
        return dp[l][r]=1;
    if(str[l]==str[r])
        return dp[l][r]=solve(l+1,r)+solve(l,r-1)+1;
    else
        return dp[l][r]=solve(l+1,r)+solve(l,r-1)-solve(l+1,r-1);
}

int main()
{
    int T,cs=0;
    cin>>T;
    while(T--)
    {
        memset(dp,-1,sizeof (dp));
        scanf("%s",str);
        int l=strlen(str);
        printf("Case %d: %d\n",++cs,solve(0,l-1));
    }
    return 0;
}

