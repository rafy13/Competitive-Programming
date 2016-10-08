#include<stdio.h>
int main()
{
    int i,k,t,j=1,s,r;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        s=0;
        r=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&k);
            if(k==0)
                r++;
            else
                s++;
        }
        printf("Case %d: %d\n",j,s-r);
        j++;

    }
    return 0;
}
