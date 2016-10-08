#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,p;
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&x,&y,&r);
        p=sqrt(x*x+y*y);
        printf("%.2f %.2f\n",r-p,r+p);
    }
    return 0;
}
