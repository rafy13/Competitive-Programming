#include<stdio.h>
int main()
{
    int s=0,l,i,j,m,n,N;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N);
        s=0;
        l=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&m);
            if(j==0)
                s=m;
            if(s>m)
                s=m;
            if(m>l)
                l=m;

        }
        printf("%d\n",(l-s)*2);
    }
    return 0;
}
