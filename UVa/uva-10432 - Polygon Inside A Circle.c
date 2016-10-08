#include<stdio.h>
//#include<iostream>
#include<math.h>
#define PI 3.1415926535897932384626433832795
//using namespace std;
int main()
{
    double R,n;
    while(scanf("%lf%lf",&R,&n)==2)
    {
        printf("%.3lf\n",(R*R*sin(2*PI/n)*n/2));
    }
    return 0;
}

