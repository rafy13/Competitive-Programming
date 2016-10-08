#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int n,s,p,q;
    float a,b,c;
    while(scanf("%f%f%d",&a,&b,&s)==3)
    {
        c=a/s;
        p=ceil(c);
        c=b/s;
        q=ceil(c);
        printf("%d\n",q*p);

    }
    return 0;
}
