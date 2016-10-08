#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mod,T,i=0,cnt,tem;
    scanf("%d",&T);
    while(T--)
    {
        cnt=1;
        scanf("%d%d",&mod,&n);
        tem=n;
        while(n%mod)
        {
            n=n*10+tem;
            n%=mod;
            cnt++;
        }
        printf("Case %d: %d\n",++i,cnt);
    }
    return 0;

}
