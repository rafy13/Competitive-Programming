#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MX 10000
int parent[MX];

struct edge
{
    int u,v,w;
};
vector<edge>e;

bool cmp(edge a,edge b)
{
    return a.w<b.w;
}

int find_set(int r)
{
    if(parent[r]==r)
        return r;
    else
        return parent[r]=find_set(parent[r]);

}

int mst(int n)
{
    sort(e.begin(),e.end(),cmp);
    for(int i=0;i<=n;i++)
        parent[i]=i;
    int st=n;
    int s=0;
    int l=e.size();
    for(int i=0;i<l;i++)
    {
        int u=find_set(e[i].u);
        int v=find_set(e[i].v);
        if(u!=v)
        {
            parent[u]=v;
            st--;
            s+=e[i].w;
            if(st==1)
                break;
        }
    }
    return s;
}

int main()
{
    int TC,n,cs=0,i,j;
    edge tem;
    scanf("%d",&TC);
    while(TC--)
    {
        scanf("%d",&n);
        while(scanf("%d%d%d",&tem.u,&tem.v,&tem.w)==3)
        {
            if(tem.u==0&&tem.v==0&&tem.w==0)
                break;
            e.push_back(tem);
        }
        int ans=mst(n);
        if(ans%2==0)
            printf("Case %d: %d\n",++cs,ans/2);
        else
            printf("Case %d: %d/2\n",++cs,ans);
        e.clear();
    }
    return 0;
}
