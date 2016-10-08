#include<stdio.h>
#include<iostream>
#include<vector>
#include<bitset>
#include<math.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;


ll sieve_size;
bitset<1000099>bs;
vector<int> primes;
void sieve(ll upperbound)
{
    sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    primes.push_back(2);
    for(ll i=4;i<=sieve_size;i+=2)
        bs[i]=0;
    for (ll i=3;i<=sieve_size;i+=2)
        if (bs[i])
            {
                for (ll j=i*i;j<=sieve_size;j+=(2*i))
                    bs[j]=0;
                primes.push_back((int)i);
            }
}
ull pown(ll a, ll b)
{
    ll x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
        }
        y = (y*y);
        b /= 2;
    }
    return x;
}

ll sumDiv(ll N)
{
    ll PF_idx=0,ans=1,tem;
    ll PF=primes[PF_idx];
    tem=N;
    while (PF*PF<=N)
    {
        ll power=0;
        while (N%PF==0)
        {
            N/=PF;
            power++;
        }
        ans*=(pown(PF,power+1)-1)/(PF-1);
        PF=primes[++PF_idx];
    }
    if(N!=1)
        ans*=(round((pown(N,2)-1))/(N-1));
    if(tem!=1)
        ans=ans-tem-1;
    else ans--;
    return ans;
}

int main()
{
    sieve(1000000);
    ll n,T,i=0,j,ans;
    scanf("%d",&T);
    while(T--)
    {
        ans=0;
        scanf("%lld",&n);
        for(j=1;j<=n;j++)
            ans+=sumDiv(j);
        printf("Case %lld: %lld\n",++i,ans);
    }
    return 0;
}
