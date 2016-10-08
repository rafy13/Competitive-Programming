#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double w;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>w;
        int ans = floor((sqrt(1+8*w)-1)/2);//sum of first n integers (n*(n+1))/2=w. the floor value of n will be the ans.
        cout<<ans<<endl;
    }
    return 0;
}
