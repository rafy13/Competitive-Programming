#include<stdio.h>
#include<math.h>
#define PI (2*acos(0))
int main()
{
   double D,V,d,a,b;
   while(1)
   {
       scanf("%lf%lf",&D,&V);
       if(D==0&&V==0)
          break;
       a=D*D*D-(6*V/PI);
       d=pow(a,1/3.0);
       printf("%.3lf\n",d);
   }
   return 0;
}
