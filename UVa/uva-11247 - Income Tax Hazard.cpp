#include<stdio.h>
#include<math.h>
int main()
{
    long long m,x,v;
    while(scanf("%lld%lld",&m,&x)==2)
    {
        if(m==0&&x==0)
            break;
        if(x==0||x==100||m==0)
        {
            printf("Not found\n");
            continue;
        }

        v=((m-1)*100)/(100-x);
        if (((100*(m-1))%(100-x))==0)
            v--;
        if(v>=m)
            printf("%lld\n",v);
        else printf("Not found\n");
    }
    return 0;
}

