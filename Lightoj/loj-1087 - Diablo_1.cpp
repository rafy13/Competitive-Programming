#include<bits/stdc++.h>
using namespace std;

#define mx 130001
int arr[mx],tree[mx*3];

int init(int pos,int low,int high)
{
    if(low==high)
    {
        if(arr[low]!=0)
            tree[pos]=1;
        else
            tree[pos]=0;
        return tree[pos];
    }
    int mid=(low+high)/2;
    tree[pos]=init(pos*2+1,low,mid)+init(pos*2+2,mid+1,high);
    return tree[pos];
}

void update(int pos,int low,int high,int i,int newvalue)
{
    if(i>high||i<low)
        return;
    if (i==low&&i==high)
    {
        tree[pos]=1;
        return;
    }
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    update(Left,low,mid,i,newvalue);
    update(Right,mid+1,high,i,newvalue);
    tree[pos]=tree[Left]+tree[Right];
}

int query(int pos,int low,int high,int p)
{
    cout<<"pos="<<tree[pos]<<"    p="<<p<<endl;
    if(low==high&&tree[pos]==1)
    {
        printf("%d\n",arr[low]);
        tree[pos]=0;
        return 0;
    }

    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    if(tree[Left]>=p)
        query(Left,low,mid,p);
    else
        query(Right,mid+1,high,p-tree[Left]);
    tree[pos]=tree[Left]+tree[Right];
    return tree[pos];
}
int main()
{
    freopen("input.txt","r",stdin);
    int T,q,p,i=0,n,cnt=0;
    char c;
    scanf("%d",&T);
    while(T--)
    {
        printf("Case %d:\n",++cnt);
        memset(arr,0,sizeof(arr));
        scanf("%d%d",&n,&q);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        init(0,0,mx);
        while(q--)
        {
            c=getchar();
            scanf("%c%d",&c,&p);
            //cout<<"c="<<c<<"   p="<<p<<endl;
            if(c=='c')
            {
                if(tree[0]<p)
                    printf("none\n");
                else
                {
                    query(0,0,mx,p);
                }
            }
            else
            {
                n+=1;
                arr[n]=p;
                update(0,0,mx,n,p);
            }
        }
    }
    return 0;
}


