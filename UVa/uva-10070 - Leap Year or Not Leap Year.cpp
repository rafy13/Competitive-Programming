#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    bool f=0;
    long long y,l,hulu,bulu;
    while(scanf("%lld",&y)==1)
    {
        if(f)
            printf("\n");
        else f=1;
        hulu=bulu=l=0;
        if(y%400==0)
            l=1;
        else if(y%100==0)
            l=0;
        else if(y%4==0)
            l=1;
        else l=0;
        if(y%15==0)
            hulu=1;
        if(y%55==0&&l)
            bulu=1;
        if(l||hulu||bulu)
        {
            if(l)
                printf("This is leap year.\n");
            if(hulu)
                printf("This is huluculu festival year.\n");
            if(bulu)
                printf("This is bulukulu festival year.\n");
        }
        else printf("This is an ordinary year.\n");

    }
    return 0;
}
