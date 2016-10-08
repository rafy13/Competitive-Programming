#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=0,x1,y1,x2,y2,x,y,n;
    cin>>T;
    while(T--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        printf("Case %d:\n",++cs);
        while(n--)
        {
            cin>>x>>y;
            if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}

