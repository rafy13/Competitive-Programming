#define PI 3.1415926535897932384626433832795
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,t;
    t=(sin((PI*108)/180)/sin((PI*63)/180));
    while(scanf("%lf",&a)==1)
    {
        printf("%.10lf\n",a*t);
    }
    return 0;
}
