#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int T,cs=0,d,n,q,arr[120],x,y,i,j;
    char c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&q);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        while(q--)
        {
            getchar();
            scanf("%c",&c);
            if(c=='S')
            {
                scanf("%d",&d);
                for(i=0; i<n; i++)
                    arr[i]+=d;
            }

            else if(c=='M')
            {
                scanf("%d",&d);
                for(i=0; i<n; i++)
                    arr[i]*=d;
            }
            else if(c=='D')
            {
                scanf("%d",&d);
                for(i=0; i<n; i++)
                    arr[i]/=d;
            }
            else if(c=='R')
            {
                i=0;
                j=n-1;
                while(i<j)
                {
                    swap(arr[i],arr[j]);
                    i++;
                    j--;
                }
            }
            else if(c=='P')
            {
                scanf("%d %d",&x,&y);
                swap(arr[x],arr[y]);
            }

        }
        printf("Case %d:\n",++cs);
        for(i=0; i<n; i++)
        {
            if(i)
                printf(" ");
            printf("%d",arr[i]);
        }
        printf("\n");

    }
    return 0;
}
