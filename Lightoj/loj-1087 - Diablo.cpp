#include<bits/stdc++.h>
using namespace std;

#define mx 100001 //for my pc otherwise it won't run :(
// #define mx 170001 for accepted code
int arr[mx];
struct diablo
{
    int no,prop;
    diablo()
    {
        no=0;
        prop=0;
    }
}tree[mx*3];

int init(int pos,int low,int high)
{
    if(low==high)
    {
        if(arr[low]!=0)
        {
            tree[pos].prop=1;
            tree[pos].no=arr[low];
        }
        else
        {
            tree[pos].prop=0;
            tree[pos].no=arr[low];
        }
        return tree[pos].prop;
    }
    int mid=(low+high)/2;
    tree[pos].prop=init(pos*2+1,low,mid)+init(pos*2+2,mid+1,high);
    return tree[pos].prop;
}

void update(int pos,int low,int high,int i,int newvalue)
{
    if(i>high||i<low)
        return;
    if (i==low&&i==high)
    {
        tree[pos].prop=1;
        tree[pos].no=newvalue;
        return;
    }
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    update(Left,low,mid,i,newvalue);
    update(Right,mid+1,high,i,newvalue);
    tree[pos].prop=tree[Left].prop+tree[Right].prop;
}

int query(int pos,int low,int high,int p)
{
    //cout<<"pos="<<tree[pos].prop<<"    p="<<p<<endl;
    if(low==high&&tree[pos].prop==1)
    {
        printf("%d\n",tree[pos].no);
        tree[pos].prop=0;
        return 0;
    }

    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    if(tree[Left].prop>=p)
        query(Left,low,mid,p);
    else
        query(Right,mid+1,high,p-tree[Left].prop);
    tree[pos].prop=tree[Left].prop+tree[Right].prop;
    return tree[pos].prop;
}
int main()
{
    //freopen("input.txt","r",stdin);
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
                if(tree[0].prop<p)
                    printf("none\n");
                else
                {
                    query(0,0,mx,p);
                }
            }
            else
            {
                n+=1;
                update(0,0,mx,n,p);
            }
        }
    }
    return 0;
}

