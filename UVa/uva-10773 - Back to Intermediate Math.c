#include<stdio.h>
#include<math.h>
int main()
{
    float d,u,v;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&d,&v,&u);
        if(v>=u||u<=0||v<=0||d<=0)
            printf("Case %d: can't determine\n",i+1);
        else
          printf("Case %d: %.3f\n",i+1,(d/(sqrt(u*u-v*v))-(d/u)));
    }
    return 0;

}
