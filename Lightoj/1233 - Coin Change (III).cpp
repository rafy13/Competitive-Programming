#include<iostream>
#include<bits/stdc++.h>
#define mx 100000007
using namespace std;
struct coin
{
    int val,num;
};

coin coins[111];
bitset<100099>tk;
int used[100099];
int n,k;
int cnt;
long long solve()
{
    cnt=0;
    for(int i=0;i<n;i++)
    {
        memset(used,0,sizeof(used));
        for(int j=coins[i].val;j<=k;j++)
        {
            if(!tk[j])
            {
                if(tk[j-coins[i].val]!=0&&used[j-coins[i].val]<coins[i].num)
                {
                    tk[j]=1;
                    used[j]=used[j-coins[i].val]+1;
                    cnt++;
                }

            }

        }

    }
    return cnt;
}
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {

        cin>>n>>k;
        tk.reset();
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
