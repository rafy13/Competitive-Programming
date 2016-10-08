#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,ans;
    int i=0,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld%lld",&n,&c);
        if(n==0)
            ans=0;
        else
        {
            ans=c/(2*n);
            if((ans+1)*(c-(ans+1)*n)>ans*(c-ans*n))
                ans++;
        }

        printf("Case %d: %lld\n",++i,ans);
    }
    return 0;
}
