#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,f,b,d;
    while(scanf("%d",&n)==1)
    {
        long int a[n],b[n],j,t;
        f=1;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            if(i!=0)
                b[i]=labs(a[i]-a[i-1]);
        }for(i=1;i<n;i++)
            printf("%ld    ",b[i]);
            printf("\n");
        for(i=1;i<n;i++)
            for(j=1;j<n-1;j++)
            if(b[j]>b[j+1])
        {
            d=b[j];
            b[j]=b[j+1];
            b[j+1]=d;
        }

         for(i=1;i<n;i++)
            printf("%ld    ",b[i]);
            for(i=1;i<n;i++)
        {
            if(i!=b[i])
            {
                printf("Not jolly\n");
                f=0;
                break;
            }
        }
            if(f==1)
                printf("Jolly\n");


    }
    return 0;
}
