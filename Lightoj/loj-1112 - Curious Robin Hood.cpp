#include<bits/stdc++.h>
using namespace std;

#define mx 100001
int arr[mx];
int tree[mx*3];

int init(int pos,int low,int high)
{
    if(low==high)
    {
        tree[pos]=arr[low];
        return tree[pos];
    }
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    init(Left,low,mid);
    init(Right,mid+1,high);
    tree[pos]=tree[Left]+tree[Right];
    return tree[pos];
}

void update(int pos,int low,int high,int i,int newvalue)
{
    if(i>high||i<low)
        return;
    if (low==high)
    {
        tree[pos]+=newvalue;
        return;
    }
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    update(Left,low,mid,i,newvalue);
    update(Right,mid+1,high,i,newvalue);
    tree[pos]=tree[Left]+tree[Right];
}

int query(int pos,int low,int high,int i,int j)
{
    if (high<i||low>j)//out of range
        return 0;
    if(low>=i&&high<=j)//inside the range
        return tree[pos];
    //We need to divide more to find relevent node
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    return (query(Left,low,mid,i,j)+query(Right,mid+1,high,i,j));//return the sum of Right and Left node
}

int main()
{
    int n,q,T,cs=0,ans,low,high,task,pos,val;
    //freopen("input.txt","r",stdin);
    cin>>T;
    while(T--)
    {
        scanf("%d%d",&n,&q);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        init(0,0,n-1);
        printf("Case %d:\n",++cs);
        for(int j=1;j<=q;j++)
        {
            scanf("%d",&task);
            if(task==1)
            {
                scanf("%d",&pos);
                printf("%d\n",arr[pos]);
                val=-arr[pos];
                arr[pos]=0;
                update(0,0,n-1,pos,val);
            }
            else if(task==2)
            {
                scanf("%d%d",&pos,&val);
                arr[pos]+=val;
                update(0,0,n-1,pos,val);
            }
            else if(task==3)
            {
                scanf("%d%d",&low,&high);
                ans=query(0,0,n-1,low,high);
                printf("%d\n",ans);
            }
        }

    }

    return 0;
}
