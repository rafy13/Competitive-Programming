#include<stdio.h>
int main()
{
    int t,i,clm,y1,y2,gap,f,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&clm);
        f=1;
        for(i=0;i<clm;i++)
        {
            scanf("%d%d",&a,&b);
            if(!f)
                continue;
            if(i==0)
            {
                gap=a-b;
                continue;
            }
            if(gap!=a-b)
                f=0;
        }
        if(f)
            printf("yes\n");
        else printf("no\n");
        if(t)
            printf("\n");
    }
    return 0;
}
