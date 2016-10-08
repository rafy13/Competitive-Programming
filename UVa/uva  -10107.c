#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,m,p,a[10010],q,b;
    float f;
    while(scanf("%d",&a[i])==1)
    {
        if(i%2==0)
            printf("%d\n",a[i/2]/2);
        else
        {
            p=(i-1)/2;
            q=a[p]+a[p+1];
            f=(float)q/2;
            b=floor(f);
            printf("%d\n",b);
        }
        i++;

    }
    return 0;
}
