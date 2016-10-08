#include<stdio.h>
int main()
{
    int s,e,f,c,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&e,&f,&c);
        s=0;
        b=e+f;
        while(b>=c)
        {
            s+=b/c;
            b=b/c+b%c;
        }
        printf("%d\n",s);
    }
    return 0;
}


