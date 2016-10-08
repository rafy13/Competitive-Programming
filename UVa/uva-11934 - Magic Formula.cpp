#include<stdio.h>
int main()
{
    int a,b,c,d,l,i,cnt;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)==5)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
            cnt = 0;
        for(i=0;i<=l;i++)
        {
            if((a*i*i+b*i+c)%d==0)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
