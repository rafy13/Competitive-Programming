#include<bits/stdc++.h>
using namespace std;
#define mx 1429500
#define N 100011
int tree[3*mx+100],ans[100011];
int update(int pos,int l,int r,int no)
{
    if(no>tree[pos])
        return tree[pos];
    if(r==l)
    {
        tree[pos]=0;
        return tree[pos];
    }
    int lc=2*pos,rc=2*pos+1;

    if(tree[lc]>=no)
        update(lc,l,(l+r)/2,no);
    else
        update (rc,((l+r)/2)+1,r,no-tree[lc]);
    return tree[pos]=tree[lc]+tree[rc];
}

int quary(int pos,int l,int r,int no)
{
    if(r==l)
        return l;
    else if(tree[2*pos]>=no)
        return quary(2*pos,l,(l+r)/2,no);
    else
        return quary(2*pos+1,((l+r)/2)+1,r,no-tree[2*pos]);
}
int makeTree(int pos,int l,int r)
{
    if(l==r)
    {
        tree[pos]=l&1;
        return tree[pos];
    }
    return tree[pos]=makeTree(2*pos,l,(l+r)/2)+makeTree(2*pos+1,((l+r)/2)+1,r);
}
void process()
{
    int ithNum;
    makeTree(1,1,mx);
    ans[1]=1;
    for(int i=2;i<100005;i++)
    {
        ithNum=quary(1,1,mx,i);
        ans[i]=ithNum;
        int j=mx-mx%ithNum;
        for(;j>=ithNum;j-=ithNum)
            update(1,1,mx,j);
    }
}
int main()
{
    int T,n,cs=0;
    process();
    cin>>T;
    while(T--)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",++cs,ans[n]);
    }
    return 0;
}
