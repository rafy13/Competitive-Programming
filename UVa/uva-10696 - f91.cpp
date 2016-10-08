#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long int n,t;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        t=n;
        if(n<=100)
            n=91;
            else n-=10;
        printf("f91(%ld) = %ld\n",t,n);
    }
    return 0;
}
