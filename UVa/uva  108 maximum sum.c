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
                for(a=0;a<=n-i;a++)
                    for(b=0;b<=n-j;b++)
                {
                    t=0;
                    for(k=a;k<a+i;k++)
                        for(l=b;l<b+j;l++)
                        t+=m[k][l];
                    if(t>s)
                        s=t;
                }
            }
            printf("%d\n",s);
    }
}

