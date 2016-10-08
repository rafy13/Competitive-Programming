#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,q;
    float a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&a,&b);
        c=(a-2)/3;
        p=ceil(c);
        c=(b-2)/3;
        q=ceil(c);
        printf("%d\n",q*p);

    }
    return 0;
}
