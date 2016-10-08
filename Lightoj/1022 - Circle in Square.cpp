#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    int T,i=0;
    double r,ans;
    cin>>T;
    while(T--)
    {
        scanf("%lf",&r);
        ans=r*r*(4-pi);
        printf("Case %d: %.2f\n",++i,ans);
    }
    return 0;
}
