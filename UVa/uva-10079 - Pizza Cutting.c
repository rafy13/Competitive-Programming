#include<stdio.h>
int main()
{
    long int n;
    while(1)
    {
        scanf("%ld",&n);
        if(n<0)
            break;
        else printf("%ld\n",(n*n+n+2)/2);

    }
    return 0;
}
