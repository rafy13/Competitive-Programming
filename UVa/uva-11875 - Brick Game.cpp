#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int T,n,a;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a;
            if((n/2+1)==j)
                printf("Case %d: %d\n",i,a);
        }
    }
    return 0;
}
