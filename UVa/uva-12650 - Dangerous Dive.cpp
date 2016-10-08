#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,r,N[10005];
    while(scanf("%d%d",&n,&r)==2)
    {
        for(i=1;i<=n;i++)
            N[i-1]=i;
        for(j=0;j<r;j++)
        {
            cin>>i;
            N[i-1]=0;
        }
        if(r!=n)
        {
            for(i=0;i<n;i++)
            if(N[i]!=0)
            cout<<N[i]<<" ";
        }

        else
            cout<<"*";
        cout<<endl;

    }
    return 0;

}
