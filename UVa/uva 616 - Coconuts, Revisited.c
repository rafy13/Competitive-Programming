#include<stdio.h>
int main()
{
    long int c,m,i,j,k,ct,f;
    while(1)
    {
        scanf("%ld",&c);

        if(c<0)
            break;
        if(c==0||c==1)
        {
            printf("%ld coconuts, no solution\n",c);
            continue;
        }
        for(i=c/2;i>=1;i--)
        {
            ct=c;

            if(i==1)
            {
                printf("%ld coconuts, no solution\n",c);
                break;
            }
            if((c-1)%i==0)
            {
                f=1;
                for(j=0;j<i;j++)
                {
                    if((ct-1)%i!=0)
                    {
                        f=0;
                        break;
                    }
                    else
                        ct=((ct-1)*(i-1))/i;
                }
                if(f!=0)
                if((ct%i)==0)
                {
                    printf("%ld coconuts, %ld people and 1 monkey\n",c,i);
                    break;
                }

            }
        }
    }
    return 0;
}
