#include<stdio.h>
int main()
{
    int n,b,h,w,i,j,p,a,tcost,cost;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
    {
        cost=b+10;;
        tcost = 0;
        for(i=0;i<h;i++)
        {
            scanf("%d",&p);
            for(j=0;j<w;j++)
            {
                scanf("%d",&a);
                if(a>=n)
                {
                    tcost = n*p;
                    if(tcost<cost)
                        cost = tcost;
                }
            }
        }
        if(cost<=b)
            printf("%d\n",cost);
        else printf("stay home\n");

    }
    return 0;
}
