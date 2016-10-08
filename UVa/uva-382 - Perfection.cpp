#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
            if(n==1)
            {
                printf("%5d  DEFICIENT\n",n);
                continue;
            }

        int sum=1;
        int sqr=sqrt(n);

        for(int i=2;i<=sqr;i++)
        {
            if(n%i==0)
            {
                int a=n/i;
                sum+=a;
                if(i*i!=n)
                    sum+=i;
            }
        }
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
