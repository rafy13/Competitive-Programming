#include<stdio.h>
int main()
{
    int s,n,m,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        s=0;
        while(n>=m)
        {
            s+=n/m;
            n=n/m+n%m;
        }
        if(n==1)
            printf("%d\n",s);
        else printf("cannot do this\n");
    }
    return 0;
}



