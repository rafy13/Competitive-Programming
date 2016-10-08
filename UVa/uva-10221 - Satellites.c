#include<stdio.h>
//#include<string.h>
#include<math.h>
int main()
{
    double s,a;
    char t[3];
    while(scanf("%lf%lf%s",&s,&a,&t)==3)
    {
        if(strcmp(t,"deg")==0)
        {
            if(a>180)
                a=-360;
            a=(a*M_PI)/180;




        }
        else
        {
            a=a/60;
            if(a>180)
                a=-360;
             a=(a*M_PI)/180;
        }
        printf("%.6lf %.6lf\n",a*(s+6440),(sin(a)*(s+6440))/sin((M_PI-a)/2));



    }
    return 0;

}
