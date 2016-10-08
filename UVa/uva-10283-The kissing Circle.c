#include<stdio.h>
//#include<iostream>
#include<math.h>
#define PI 3.1415926535897932384626433832795
//using namespace std;
int main()
{
    double R,n,a,r,i,e;
    while(scanf("%lf%lf",&R,&n)==2)
    {
        a=PI/n;
        if(n==1)
        {
            r=R;
            i=0;
            e=0;

        }
        else
        {
             r=R/(1+(1/(sin(a))));
             i=((R-r)*(R-r)*sin(2*a)-r*r*(PI-2*a))*n/2;
             e=PI*R*R-(n*PI*r*r+i);
        }

        printf("%.10f %.10f %.10f\n",r,i,e);


    }
    return 0;
}
