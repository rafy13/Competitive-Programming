#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i=0;
    double v1,v2,v3,a1,a2,d,ans;
    cin>>T;
    while(T--)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        ans=max(v1/a1,v2/a2)*v3;
        d=(v1*v1)/(2.0*a1)+(v2*v2)/(2.0*a2);/**s=v^2/(2a) d=s1+s2**/
        printf("Case %d: %.10lf %.10lf\n",++i,d,ans);
    }
    return 0;
}
