#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

ll dp[21][1<<17];
int l,k,base;
string str;
ll value[200];


ll powu(ll a, ll b)
{
    ll x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
        }
        y = (y*y)%k;
        b /= 2;
    }
    return x;
}

ll solve(int rem,int mask)
{
    if(dp[rem][mask]!=-1)
        return dp[rem][mask];

    ll ans=0;
    ll p=__builtin_popcount(mask);
    if(l==p&&rem==0)
        return 1;
    for(int i=0;i<l;i++)
    {
        if(!(mask&(1<<i)))
            ans+=solve((rem+value[str[i]]*powu(base,p))%k,mask|(1<<i));
    }
    return dp[rem][mask]=ans;
}


int main()
{
    int t,cs=0;
    ll ans;
    cin>>t;
    string dgt="0123456789ABCDEFG";
    for(ll i=0;i<dgt.length();i++)
        value[dgt[i]]=i;
    while(t--)
    {
        cin>>base>>k;
        cin>>str;
        memset(dp,-1,sizeof dp);
        l=str.length();
        ans=solve(0,0);
        printf("Case %d: %lld\n",++cs,ans);
    }
    return 0;
}
