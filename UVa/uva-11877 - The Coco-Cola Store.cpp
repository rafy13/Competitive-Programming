#include<stdio.h>
int main()
{
    int s,n,b;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        s=0;
        b=n;
        while(b>2)
        {
            n=b/3;
            s+=n;
            b=b/3+b%3;
        }
        if(b>1)
        printf("%d\n",s+1);
        else
            printf("%d\n",s);
    }
    return 0;
}

