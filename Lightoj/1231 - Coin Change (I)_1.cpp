#include<iostream>
#include<bits/stdc++.h>
#define mx 100000007
using namespace std;
struct coin
{
    int val,num;
};

coin coins[111];
long long tk[1099];
long long withoutmaxuse[1099];
int used[100099];
int n,k;
int cnt;
long long solve()
{
    for(int i=0;i<n;i++)
    {
        memset(used,0,sizeof(used));
        for(int j=coins[i].val;j<=k;j++)
        {
            if(tk[j-coins[i].val]!=0)
            {
                if(used[j-coins[i].val]<coins[i].num)
                {
                    if(used[j-coins[i].val]+1==coins[i].num)
                        withoutmaxuse[j]=tk[j];
                    tk[j]=(tk[j]+tk[j-coins[i].val])%mx;
                    used[j]=used[j-coins[i].val]+1;
                }
                else
                {

                    withoutmaxuse[j]=tk[j];
                    cout<<"j="<<j<<"   "<<coins[i].val<<"  "<<withoutmaxuse[j]<<endl;
                    tk[j]=(tk[j]+withoutmaxuse[j-coins[i].val])%mx;
                    used[j]=used[j-coins[i].val];
                }

            }
            cout<<"tk["<<j<<"]="<<tk[j]<<"for coin"<<coins[i].val<<endl;

        }

    }
    return tk[k];
}
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {

        cin>>n>>k;
        memset(tk,0,sizeof(tk));
        tk[0]=1;
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
        printf("Case %d: %d\n",i,solve());

    }
    return 0;
}
