#include<stdio.h>
#include<math.h>
int main()
{
    double d,v,u,t_min,t_dis,p,a;
    int test,i;
    scanf("%d",&test);

        for(i=1;i<=test;i++)
        {
            scanf("%lf%lf%lf",&d,&v,&u);
            if(v>=u||u<=0||v<=0||d<=0)
                printf("Case %d: can't determine\n",i);
            else
            {
                a=sqrt(u*u-v*v);
                t_dis=d/a;
                t_min=d/u;
                p=t_dis-t_min;
                printf("Case %d: %.3lf\n",i,fabs(p));
            }
        }

    return 0;
}
