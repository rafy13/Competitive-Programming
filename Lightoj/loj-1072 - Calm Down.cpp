/**
we can write
sin(thita)=r/(R-r)
........here thita is half of the angle produced in the center of the large circle by one small circle. Theta = 2*PI/(2*n)=PI/n.
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=0;
    double ans,thita,n,R;
    cin>>T;
    while(T--)
    {
        cin>>R>>n;
        thita=M_PI/n;
        ans=R*sin(thita)/(1+sin(thita));
        printf("Case %d: %.10f\n",++cs,ans);
    }
    return 0;
}
