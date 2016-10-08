#include<stdio.h>
int main()
{
    int h,m,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d:%d",&h,&m);
        if(h==12)
            h=0;

        if(m!=0)
            {
                m=(60-m);
                h=(12-h-1);
            }
        else h=(12-h);
        if(h==0)
            h=12;
        if(h<10)
            printf("0");
        printf("%d:",h);
        if(m<10)
            printf("0");
            printf("%d\n",m);

    }
    return 0;
}
