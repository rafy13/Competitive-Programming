#include<stdio.h>
int main()
{
    long int v,n,i,a,b;
    while(scanf("%ld",&v)==1)
    {
        i=1;
        while(1)
        {
            if((i*i+i)>=2*v)
            {

                a=i-(((i*i+i)/2)-v);
                b=i-a+1;
                if(i%2==0)
                printf("TERM %d IS %d/%d\n",v,a,b);
                else
                    printf("TERM %ld IS %ld/%ld\n",v,b,a);
                break;
            }
            i++;
        }
    }
}
