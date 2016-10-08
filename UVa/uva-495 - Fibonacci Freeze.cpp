#include<stdio.h>
#include<string>
using namespace std;
int main()
{
     long int i,a,b,c,n;
    while(scanf("%ld",&n)==1)
    {
        a=0;
        b=1;
        c=0;
        if(n==0)
            printf("The Fibonacci number for %ld is %ld\n",n,a);
        else if(n==1)
            printf("The Fibonacci number for %ld is %ld\n",n,b);
        else
           {
               for(i=2;i<=n;i++)
        {
            c=b;
            b=a+b;
            a=c;
        }
           printf("The Fibonacci number for %ld is %ld\n",n,b);
           }
    }
    return 0;
}
