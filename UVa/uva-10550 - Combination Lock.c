#include<stdio.h>
int main()
{
    int s,p1,p2,p3,d;
    while(1)

    {
        scanf("%d%d%d%d",&s,&p1,&p2,&p3);
        if(s==0&&p1==0&&p2==0&&p3==0)
            break;
        d=1080;
        if(p1>s)
            d+=((s*9+(40-p1)*9));
        else if(p1<s)
            d+=((s-p1)*9);
        else d+=360;


        if(p2>p1)
          d+=((p2-p1)*9);
        else if(p2<p1)
             d+=(((40-p1)*9)+p2*9);
        else d+=360;


        if(p3>p2)
            d+=((p2*9+(40-p3)*9));
        else if(p3<p2)
            d+=((p2-p3)*9);
        else d+=360;
        printf("%d\n",d);


    }
    return 0;
}
