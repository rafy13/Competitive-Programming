#include<bits/stdc++.h>
using namespace std;
int n,w;
int dp[200][200];
vector<int> vct;
int solve(int pos,int k)
{
    int i,cnt=0;
    if(dp[pos][k]!=-1)
        return dp[pos][k];
    if(pos>=n||k<=0)
        return 0;
    for(i=pos;vct[i]<=vct[pos]+w&&i<n;i++)
        cnt++;
    return dp[pos][k]=max(cnt+solve(i,k-1),solve(pos+1,k));

}

int main()
{
    int T,cs=0;
    int k,ans,x,y;
    cin>>T;
    while(T--)
    {
        memset(dp,-1,sizeof(dp));
        vct.clear();
        cin>>n>>w>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            vct.push_back(y);
        }
        sort(vct.begin(),vct.end());
        printf("Case %d: %d\n",++cs,solve(0,k));
    }
    return 0;

}
