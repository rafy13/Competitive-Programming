#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,T,i=0,ans=0,d;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        if(n==1||m==1)
            ans=m*n;

        else if(n==2||m==2)
        {
            d=m*n%8;
            ans=(m*n)-d;
            if(d>4)
                d=4;
            ans=ans/2+d;
        }
        else
            ans=(m*n)/2+(m*n)%2;
        printf("Case %d: %d\n",++i,ans);
    }
    return 0;
}

