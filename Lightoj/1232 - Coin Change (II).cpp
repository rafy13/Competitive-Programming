#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define mx 100000007
int coin[150];
long long tk[10099];
int n,k;
void solve()
{
    for(int i=0;i<n;i++)
    {

        for(int j=coin[i];j<=k;j++)
        {
            if(tk[j-coin[i]]!=0)
                tk[j]=(tk[j]+tk[j-coin[i]])%mx;
        }
    }
}
int main()
{
    int j,T;
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
        scanf("%d%d",&n,&k);
        memset(tk,0,sizeof(tk));
        tk[0]=1;
        for(int i=0;i<n;i++)
            scanf("%d",&coin[i]);
        solve();
        printf("Case %d: %lld\n",j,tk[k]);
    }
    return 0;
}

