#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,p,ans,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        ans=(p%n)+k;
        if(ans>n)
            printf("Case %d: %d\n",i,ans-n);
        else
            printf("Case %d: %d\n",i,ans);
    }
    return 0;

}
