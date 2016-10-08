#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,ans;
    int i=0,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld%lld",&n,&m);
        ans=m*n/2;
        printf("Case %d: %lld\n",++i,ans);
    }
    return 0;
}
