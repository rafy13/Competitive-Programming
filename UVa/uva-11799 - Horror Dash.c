#include<stdio.h>
int main()
{
    int i,j,tc,n,m,t;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d",&n);
        m=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&t);
            if(t>m)
                m=t;
        }
        printf("Case %d: %d\n",i+1,m);
    }
    return 0;
}
