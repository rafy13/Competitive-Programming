#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double L,N,g,r;
    scanf("%lf",&N);
    while(N--)
    {
        scanf("%lf",&L);
        r=L*L*PI/25;
        g=(L*L*6/10)-r;
        printf("%.2lf %.2lf\n",r,g);
    }
    return 0;

}
