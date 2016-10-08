#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i=0;
    double l,w,x1,x2,ans,a=12,b,c;
    scanf("%d",&T);
    while(T--)
    {
        ans=0;
        scanf("%lf%lf",&l,&w);
        b=(-4.0)*(l+w);
        //cout<<"b="<<b<<endl;
        c=l*w;
        //cout<<"c="<<c<<endl;
        x1=(-b+sqrt((b*b-4*a*c)))/(2*a);
        x2=(-b-sqrt((b*b-4*a*c)))/(2*a);
        if(x1>0)
            ans=max(ans,(l-2*x1)*(w-2*x1)*x1);
        if(x2>0)
            ans=max(ans,(l-2*x2)*(w-2*x2)*x2);
        printf("Case %d: %.8lf\n",++i,ans);
    }
    return 0;
}
