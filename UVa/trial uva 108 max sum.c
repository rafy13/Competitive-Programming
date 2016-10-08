#include<stdio.h>
int main()
{
    int a,b,i,j,k,l,s=0,t,n;
    while(scanf("%d",&n)!=0)
    {
        int m[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            scanf("%d",&m[i][j]);
            for(i=1;i<=n;i++)
               for(j=1;j<=n;j++)
            {
                printf("size (%d  %d)\n",i,j);
                for(a=0;a<=n-i;a++)
                    for(b=0;b<=n-j;b++)
                {
                    t=0;
                    printf("target (%d  %d)\n",a,b);
                    for(k=a;k<a+i;k++)
                        for(l=b;l<b+j;l++){
                        t+=m[a][b];printf("position (%d  %d)\n",k,l);}
                        printf("\n");
                    if(t>s)
                        s=t;
                }  printf("%d+   %d   %d\n",m[a][b],t,s);
            }
            printf("        %d",s);
    }
}

