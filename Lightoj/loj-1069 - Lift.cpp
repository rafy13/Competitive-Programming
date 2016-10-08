/**
4 to change floor
3 to open&close
5 to enter or exit
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,cs=0,l,me,cost,s=19;
    cin>>T;
    while(T--)
    {
        cin>>me>>l;
        cost=abs(me-l)*4+s+(me*4);
        printf("Case %d: %d\n",++cs,cost);
    }
    return 0;
}
