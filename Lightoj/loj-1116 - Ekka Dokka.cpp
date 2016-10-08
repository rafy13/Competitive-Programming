#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long m,w;
    int T,i=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%llu",&w);//printf("%d=w\n",w);
        m=1;
        while(w%2==0)
        {
            w/=2;
            m*=2;
        }
        if(m==1)
            printf("Case %d: Impossible\n",++i);
        else
            printf("Case %d: %llu %llu\n",++i,w,m);
    }
    return 0;
}
