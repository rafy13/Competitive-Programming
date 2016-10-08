#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i=0;
    long long int n,tem,x,y;
    cin>>T;
    while(T--)
    {
        scanf("%lld",&n);
        tem=ceil(sqrt(n));
        x=tem*tem-n+1;
        if(x>tem)
            x=tem;
        y=n-(tem-1)*(tem-1);
        if(y>tem)
            y=tem;
        if(tem%2==0)
            swap(x,y);
        //cout<<x<<"  "<<y<<endl;
        printf("Case %d: %lld %lld\n",++i,x,y);
    }
    return 0;
}
