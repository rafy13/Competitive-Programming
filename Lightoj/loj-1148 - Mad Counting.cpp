#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,i=0,p,d,ans;
    map<int,int>Map;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&p);
            Map[p]++;
        }
        ans=0;
        for(map<int,int>::iterator it=Map.begin();it!=Map.end();it++)
        {
            p=it->first;
            d=it->second;
            ans=ans+(d/(p+1))*(p+1);
            if(d%(p+1)!=0)
                ans+=(p+1);
        }
        printf("Case %d: %d\n",++i,ans);
        Map.clear();

    }
    return 0;
}
