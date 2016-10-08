#include<bits/stdc++.h>
using namespace std;
#define mx 1000009
char arr[mx];
bool ans;

struct info
{
    bool prop,sum;
    info()
    {
        prop=0;
        sum=0;
    }
}tree[mx*3];


void init(int pos, int low, int high)
{
    tree[pos].prop=0;
    if(low==high)
    {
        tree[pos].sum=arr[low]-'0';
        return;
    }
    int mid=(low+high)/2;
    init(pos*2+1,low,mid);
    init(pos*2+2,mid+1,high);
    return;

}


void update(int node,int b,int e,int i,int j)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].prop^=1;
        tree[node].sum^=1;
        return;
    }
    int Left=node*2+1;
    int Right=(node*2)+2;
    int mid=(b+e)/2;
    update(Left,b,mid,i,j);
    update(Right,mid+1,e,i,j);
    return;
}

void query(int node,int b,int e,int i,int carry)
{
    if (i > e || i < b)
        return;
    if(b==i and e==i)
    {
        ans=tree[node].sum^carry;
        return;
    }

    int Left=node*2+1;
    int Right=(node*2)+2;
    int mid=(b+e)/2;
    query(Left, b,mid, i, carry^tree[node].prop);
    query(Right, mid+1, e, i,carry^tree[node].prop);
    return;

}

int main()
{
    int T,q,i,j,case_no,tem,l;
    char str[1009],c;
    cin>>T;
    c =getchar();
    for(case_no=1;case_no<=T;case_no++)
    {
        gets(arr);
        l=strlen(arr)-1;
        init(0,0,l);
        scanf("%d",&q);

        c =getchar();
        printf("Case %d:\n",case_no);
        while(q--)
        {
            gets(str);
            if(str[0]=='I')
            {
                sscanf(str,"%c%d%d",&c,&i,&j);
                update(0,0,l,i-1,j-1);
            }
            else
            {
                sscanf(str,"%c%d",&c,&i);
                query(0,0,l,i-1,0);
                if(ans)
                    printf("1\n");
                else
                    printf("0\n");
            }
        }
    }

    return 0;
}
