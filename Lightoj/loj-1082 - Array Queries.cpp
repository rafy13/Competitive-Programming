#include<bits/stdc++.h>
using namespace std;

#define mx 100099
int arr[mx];
int tree[mx*3];

void init(int pos,int low,int high)
{
    if(low==high)
    {
        tree[pos]=arr[low];
        return;
    }
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    init(Left,low,mid);
    init(Right,mid+1,high);
    tree[pos]=min(tree[Left],tree[Right]);
}

int query(int pos,int low,int high,int i,int j)
{
    if (high<i||low>j)//out of range
        return mx*6;
    if(low>=i&&high<=j)//inside the range
        return tree[pos];
    //We need to divide more to find relevent node
    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    return min(query(Left,low,mid,i,j),query(Right,mid+1,high,i,j));//return the sum of Right and Left node
}

int main()
{
    int n,q,T,cs=0,ans,low,high;
    cin>>T;
    while(T--)
    {
        scanf("%d%d",&n,&q);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        init(0,0,n-1);
        printf("Case %d:\n",++cs);
        while(q--)
        {
            scanf("%d%d",&low,&high);
            ans=query(0,0,n-1,low-1,high-1);
            printf("%d\n",ans);
        }

    }

    return 0;
}

