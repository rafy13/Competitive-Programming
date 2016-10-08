#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int T,n,cs=0,a,b,c;
    cin>>T;
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<b)
            swap(a,b);
        if(a<c)
            swap(a,c);
        if(a*a==b*b+c*c)
            printf("Case %d: yes\n",++cs);
        else
            printf("Case %d: no\n",++cs);

    }
    return 0;
}
