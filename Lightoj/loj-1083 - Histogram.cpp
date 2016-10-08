#include<bits/stdc++.h>
using namespace std;

#define mx 30099
int arr[mx],ans,lp,rp;
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
    tree[pos]=min(tree[Left],tree[Right]);
    return tree[pos];
}

void query(int pos,int low,int high,int i)
{
    //cout<<i<<"="<<arr[i]<<",  low="<<low<<",   high ="<<high<<endl;
    if(low==high&&arr[i]>tree[pos])
    {
        if(i<low)
            rp=0;
        else
            lp=0;
        return;
    }

    if(arr[i]<=tree[pos])
    {
        //cout<<i<<"=low="<<low<<"   high ="<<high<<endl;
        ans+=(high-low+1);
        return;
    }

    int Left=pos*2+1;
    int Right=pos*2+2;
    int mid=(low+high)/2;
    if(low<=i&&high>=i)
    {
        if(i<=mid)
        {
            if(lp) query(Left,low,mid,i);
            if(rp) query(Right,mid+1,high,i);
        }
        else
        {
            if(rp) query(Right,mid+1,high,i);
            if(lp) query(Left,low,mid,i);
        }
        return;
    }

    if(i>high)
    {
        query(Right,mid+1,high,i);
        if(lp) query(Left,low,mid,i);
        return;
    }

    if(i<low)
    {
        query(Left,low,mid,i);
        if(rp) query(Right,mid+1,high,i);
        return;
    }

}
int main()
{
    int T,N,case_no=0,area;
    scanf("%d",&T);
    while(T--)
    {

        area=0;
        scanf("%d",&N);
        for(int i=0;i<N;i++)
            scanf("%d",&arr[i]);
        init(0,0,N-1);
        for(int i=0;i<N;i++)
        {
            ans=0,lp=1,rp=1;
            query(0,0,N-1,i);

            area=max(area,ans*arr[i]);
        }
        printf("Case %d: %d\n",++case_no,area);
    }
    return 0;

}

