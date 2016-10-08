#include<stdio.h>
#include<math.h>
int main()
{
    float m,h,i,j;

    while(scanf("%f:%f",&h,&m)==2)
    {
     if(h==0&&m==0)
            break;

     if(h==12)
        h=0;
     h=(h*5+m/12);
     i=fabs(h-m);
     if(i<=30)
        printf("%.3f\n",i*6);
     else printf("%.3f\n",(60-i)*6);
}
return 0;
}
