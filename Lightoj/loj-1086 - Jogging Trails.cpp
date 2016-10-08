#include<bits/stdc++.h>
using namespace std;


#define set(b, pos) ( b | (1 << pos) )
#define reset(b, pos) ( b & ~( 1 << pos) )
#define check(b, pos) (b & (1 << pos) )
#define mx 15

int graph[mx][mx];
int dp[10+1<<mx];
int degree[mx];
int v,e;
void warshall()
{
    for(int i=0;i<=v;i++)
        graph[i][i]=0;

    for(int i=0;i<=v;i++)
        for(int j=i+1;j<v;j++)
            for(int k=0;k<=v;k++)
                if(graph[i][j]>graph[i][k]+graph[k][j])
                    graph[i][j]=graph[i][k]+graph[k][j];
}

int res(int mask)
{
    //cout<<"here\n";
    if(mask==0)
        return 0;
    if(dp[mask]!=-1)
        return dp[mask];
    int ans =1000000000;
    int tm;
    for(int i=0;i<v;i++)
        for(int j=i+1;j<v;j++)
            if(check(mask,i) && check(mask,j))
            {
                tm = mask;
                tm = reset(tm, i);
                tm = reset(tm, j);
                ans = min(ans, res(tm) + graph[i][j]);
            }
    return dp[mask] = ans;
}
int main()
{
    int t,cs=0;
    int s,ed,w;
    cin>>t;
    while(t--)
    {
        int ans=0;
        memset(degree,0,sizeof degree);
        memset(dp,-1,sizeof dp);
        memset(graph,30,sizeof graph);
        scanf("%d%d",&v,&e);
        for(int i=0;i<e;i++)
        {
            scanf("%d%d%d",&s,&ed,&w);
            s--,ed--;
            graph[s][ed]=min(graph[s][ed],w);
            graph[ed][s]=graph[s][ed];
            degree[s]++;
            degree[ed]++;
            ans+=w;
        }
        warshall();
        int mask=0;
        for(int i=0;i<e;i++)
            if(degree[i]%2==1)
                mask|=(1<<i);
        ans=ans+res(mask);
        printf("Case %d: %d\n",++cs,ans);
    }
    return 0;
}
