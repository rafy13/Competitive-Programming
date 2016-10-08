#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int l,h;
    while(scanf("%d%d",&l,&h)==2)
    {
        if(h==1)
        {
            printf("[%d]\n",l);
            continue;
        }

        printf("[%d;",l/h);
        l=l%h;
        swap(l,h);
        int f=0;
        while(l!=1)
        {
            if(f==0)
            {
                f=1;
                printf("%d",l/h);
            }
            else printf(",%d",l/h);
            l=l%h;
            swap(l,h);
        }
        printf("]\n");
    }
    return 0;
}
