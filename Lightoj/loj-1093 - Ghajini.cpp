#include<bits/stdc++.h>
using namespace std;

struct node
{
    int mx,mn;
};

node tree[300099];
int arr[100099],MAX,MIN;

node makeTree(int pos,int l,int r)
{
    //cout<<pos<<"="<<l<<"   "<<r<<endl;
    if(l==r)
    {
        tree[pos].mx=arr[l];
        tree[pos].mn=arr[l];
        return tree[pos];
    }
    node lN=makeTree(2*pos+1,l,(l+r)/2);
    node rN=makeTree(2*pos+2,((l+r)/2)+1,r);
    tree[pos].mx=max(lN.mx,rN.mx);
    tree[pos].mn=min(lN.mn,rN.mn);
    return tree[pos];
}

void quary(int pos,int l,int r,int trL,int trR)
{
    if(l>=trL&&r<=trR)
    {
        MAX=max(MAX,tree[pos].mx);
        MIN=min(MIN,tree[pos].mn);
        return;
    }
    else if(l>trR||r<trL)
        return;
    quary(2*pos+1,l,(l+r)/2,trL,trR);
    quary(2*pos+2,(l+r)/2+1,r,trL,trR);
}

int main()
{
    int n,d,T,cs=0;
    cin>>T;
    while(T--)
    {
        cin>>n>>d;
        int i=0,l,ans=-1;
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        makeTree(0,0,n-1);
        //cout<<"here"<<endl;
        for(int l=0;l+d<=n;l++)
        {
            MAX=-1;
            MIN=1000000000;
            quary(0,0,n-1,l,l+d-1);
            ans=max(ans,MAX-MIN);
        }

        printf("Case %d: %d\n",++cs,ans);
    }

    return 0;
}
