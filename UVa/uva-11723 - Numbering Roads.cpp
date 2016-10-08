#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float r,n;
    int c=1;
    int ans;
    while(scanf("%d%d",&r,&n)==2)
    {
        if(r==0&&n==0)
            break;
        if(r>n)
            ans = ceil((r-n)/n);
        else ans = 0;
        if(ans>26)
            printf("Case %d: impossible\n",c);
        else printf("Case %d: %d\n",c,ans);
        c++;
    }
    return 0;
}

