#include<stdio.h>
int main()
{
    int m,f,n,i,j,ans[109][109];
    char c[109][109];
    f=0;
    while(scanf("%d%d",&m,&n)==2)
    {
        if(m==0&&n==0)
            break;
        if(f)
            printf("\n");
        f++;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            ans[i][j]=0;
        for(i=0;i<m;i++)
        {
            scanf("%s",c[i]);
            for(j=0;j<n;j++)
            {
                if(c[i][j]=='*')
                {
                    if(i!=0)
                    {
                        ans[i-1][j]++;
                        ans[i-1][j+1]++;
                    }
                    if(j!=0)
                    {
                        ans[i][j-1]++;
                        ans[i+1][j-1]++;
                    }
                    if(i!=0&&j!=0)
                        ans[i-1][j-1]++;
                    ans[i][j+1]++;
                    ans[i+1][j]++;
                    ans[i+1][j+1]++;
                }
            }
        }

        printf("Field #%d:\n",f);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(c[i][j]!='*')
                    printf("%d",ans[i][j]);
                else printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}
