#include<stdio.h>
//#include<iostream>
#include<math.h>
#define PI 2*acos(0)
//using namespace std;
int main()
{
    double A,n,R,s,j;
    int k=1;
    while(1)
    {
        scanf("%lf%lf",&n,&A);
        if(n<3)
            break;
        R=sqrt(2*A/(n*sin(2*PI/n)));
        s=PI*R*R-A;
        j=A-PI*R*R*cos(PI/n)*cos(PI/n);
        printf("Case %d: %.5lf %.5lf\n",k,s,j);
        k++;
        printf("%lf\n",PI);
    }
    return 0;
}


