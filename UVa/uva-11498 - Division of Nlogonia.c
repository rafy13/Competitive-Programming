#include<stdio.h>
int main()
{
    long int N,n,m,a,b,i;
    while(scanf("%ld",&N)==1)
    {
        if(N==0)
            break;
        scanf("%ld%ld",&m,&n);
        for(i=0;i<N;i++)
        {
            scanf("%ld %ld",&a,&b);
            if(a-m>0&&b-n>0) printf("NE\n");
            else if(a-m>0&&b-n<0) printf("SE\n");
            else if(a-m<0&&b-n>0) printf("NO\n");
            else if(a-m<0&&b-n<0) printf("SO\n");
            else if(a-m==0||b-n==0)
                printf("divisa\n");

        }
    }
    return 0;
}
