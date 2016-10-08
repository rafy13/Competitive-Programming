#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,l;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        int a[n],b;
        for(i=0;i<n;i++)
        cin>>a[i];
        l=0;
        k=0;
        for(i=0;i<m;i++)
        {
            cin>>b;

            for(j=l;j<n;j++)
            {
                if(a[j]>b)
                {
                    break;
                    l=j;
                }

                if(a[j]==b)
                {
                    k++;
                    l=j;
                    break;
                }
            }
        }
        cout<<k<<endl;
    }
}
