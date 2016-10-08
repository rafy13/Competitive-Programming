#include<stdio.h>
#include<math.h>
int main()
{
    int n,lg,p;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        lg = log2(n);
        p = pow(2,lg);
        if(p==n)
            printf("%d\n",n);
        else
            printf("%d\n",(n-p)*2);

    }
    return 0;
}
