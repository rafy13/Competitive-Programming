#include<stdio.h>
int main()
{
    int t,n,hj,lj,i,j,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        hj=0;
        lj=0;
        scanf("%d",&n);
        scanf("%d",&a);
        for(j=1;j<n;j++)
        {
            scanf("%d",&b);
            if(a>b)
                lj++;
            else if(a<b)
                hj++;
            a=b;
        }
        printf("Case %d: %d %d\n",i,hj,lj);
    }
    return 0;
}
