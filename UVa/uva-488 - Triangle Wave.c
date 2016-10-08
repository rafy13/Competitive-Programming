#include<stdio.h>
int main()
{
    int n,i,j,a,f,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&f);
        if(a>9)
            continue;
        for(j=0;j<f;j++)
        {
            for(k=1;k<2*a;k++)
            {
                if(k<=a)
                    {for(l=1;l<=k;l++)
                    printf("%d",k);
                    printf("\n");
                    }
                else
                {
                    for(l=2*a-k;l>0;l--)
                    printf("%d",(2*a-k));
                    printf("\n");

                }

            }
            if(i<n-1||j<f-1)
            printf("\n");
        }
    }
    return 0;
}
