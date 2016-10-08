#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int>vi;

int main()
{
    int T,cs=0;
    int n,i,j,cnt;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cnt=0;
        while(n)
        {
            if(n%2==1)
                cnt++;
            n/=2;
        }
        if(cnt%2)
            printf("Case %d: odd\n",++cs);
        else
            printf("Case %d: even\n",++cs);
    }
    return 0;
}

