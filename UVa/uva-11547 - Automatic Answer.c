#include<stdio.h>
int main()
{
    long int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        n=(5*n*63+36962)/10;
        printf("%d\n",abs(n%10));
    }
    return 0;
}
