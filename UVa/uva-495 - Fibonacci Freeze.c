#include<stdio.h>
int main()
{
     long double i,a,b,c,n;
    while(scanf("%Ld",&n)==1)
    {
        a=0;
        b=1;
        c=0;
        if(n==0)
            printf("The Fibonacci number for %Ld is %Ld\n",n,a);
        else if(n==1)
            printf("The Fibonacci number for %Ld is %Ld\n",n,b);
        else
           {
               for(i=2;i<=n;i++)
        {
            c=b;
            b=a+b;
            a=c;
        }
           printf("The Fibonacci number for %Ld is %Ld\n",n,b);
           }
    }
    return 0;
}
