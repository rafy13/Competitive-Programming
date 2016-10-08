#include<iostream>
#include<bits/stdc++.h>
#define mx 100000007
using namespace std;
struct coin
{
    int val,num;
};

vector<coin>coins(100);
long long tk[1099];
int n,k;
long long solve()
{
    for(int i=0;i<n;i++)
    {
        for(int j=k;j>=coins[i].val;j--)
        {
            for(int a=1;a<=coins[i].num;a++)
            {
                if(j-a*coins[i].val>=0)
                {
                    if(tk[j-a*coins[i].val]!=0)
                        tk[j]=(tk[j]+tk[j-a*coins[i].val])%mx;
                }
                else break;

            }
        }

    }
    return (tk[k]%mx);
}
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        memset(tk,0,sizeof(tk));
        tk[0]=1;
        cin>>n>>k;
        for(int j=0;j<n;j++)
        {
            cin>>coins[j].val;
            //cout<<coins[j].val<<endl;
        }

        for(int j=0;j<n;j++)
        {
            cin>>coins[j].num;
            //cout<<coins[j].num<<endl;
        }
        printf("Case %d: %lld\n",i,solve());

        coins.clear();

    }
    return 0;
}
