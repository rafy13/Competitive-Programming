#include<stdio.h>
#include<math.h>
#define PI 2*acos(0)
int main()
{
    int N;
    double d,l,r;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%lf%lf",&d,&l);
        r=PI*(l/2)*(sqrt((l*l/4)-(d*d/4)));
        printf("%.3lf\n",r);
    }
    return 0;
}
