#include<stdio.h>
int main()
{
    long int t,n,a,c,e,i,j,s;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%ld%ld%ld",&a,&c,&e);
            s+=(a*e);
        }
        printf("%ld\n",s);
    }
    return 0;
}
