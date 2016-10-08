#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795

int main()
{
    double a,A,b,c,s,r,P;
    P=(8*PI-6*sqrt(3))/48;
    while(scanf("%lf",&a)==1)
    {
        A=a*a;
        r=(A/2+A*P)-(PI*A/4);
        b=8*r;
        s=(A-PI*A/4-b/2)*4;
        c=A-b-s;
        printf("%.3lf %.3lf %.3lf\n",c,s,b);
    }
    return 0;
}
