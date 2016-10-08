#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int test;
    double r1,r2,r3,s,a,b,c,x1,x2,x3,f,e;
    cin>>test;
    while(test--)
    {
        cin>>r1>>r2>>r3;
        s=r1+r2+r3;
        f = sqrt(s*r1*r2*r3);
        a=r1+r2;
        b=r3+r2;
        c=r3+r1;
        x1 = acos((c*c+b*b-a*a)/(2*c*b));
        x2 = acos((c*c+a*a-b*b)/(2*c*a));
        x3 = acos((a*a+b*b-c*c)/(2*a*b));
        e=.5*(r3*r3*x1+r1*r1*x2+r2*r2*x3);
        printf("%6lf\n",f-e);

    }
}
