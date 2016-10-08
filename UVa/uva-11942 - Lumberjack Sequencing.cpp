#include<stdio.h>
int main()
{
    int N,l,p,n,nl,i;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    while(N--)
    {
        p=0;n=0;
        for(i=0;i<10;i++)
        {
            scanf("%d",&l);
            if(i)
            {
                if(l-nl>0)
                    p=1;
                if(l-nl<0)
                    n=1;
            }
            nl=l;
        }
        if(p&&n)
            printf("Unordered\n");
        else
            printf("Ordered\n");
    }
    return 0;
}
