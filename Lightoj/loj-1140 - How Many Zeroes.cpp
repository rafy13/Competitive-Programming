#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll zeros(ll n)/** number_of_zeros(10*N+C) = 10*(number_of_zeros(N)-1) + N - (9-C)*Z + 1. Here Z=number of zeros in N **/
{
    if(n<0)
        return 0;
    ll N=0,Z=0,C=0,ans=0;
    ll div=1;
    while(1)
    {
        if(div*10<=n)
            div*=10;
        else
            break;
    }
    while(div)
    {
        C=(n/div)%10;
        ans=10*ans+N-Z*(9-C);
        if(C==0)
            Z++;
        N=n/div;
        div/=10;
    }
    return ans+1;
}


int main()
{
    int T,cs=0;
    cin>>T;
    while(T--)
    {
        ll m,n;
        scanf("%lld%lld",&m,&n);
        printf("Case %d: %lld\n",++cs,zeros(n)-zeros(m-1));
    }
    return 0;
}
