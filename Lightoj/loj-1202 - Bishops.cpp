#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int T,cs=0,i,j;
    long long r1,c1,r2,c2;
    cin>>T;
    while(T--)
    {
        scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
        printf("Case %d: ",++cs);
        if((r1+c1)%2==(r2+c2)%2)
        {
            if(r1+c1==r2+c2||r1+c2==r2+c1)
                printf("1\n");
            else
                printf("2\n");

        }
        else
            printf("impossible\n");
    }
    return 0;
}
