#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
int main()
{
    ll n;
    int T,cs=0,i,l,j;
    vi str;
    cin>>T;
    while(T--)
    {
        scanf("%lld",&n);
        while(n)
        {
            str.push_back(n%2);
            n/=2;
        }

        str.push_back(0);
        i=0;
        l=str.size();
        j=l-1;
        while(i<j)
            swap(str[i++],str[j--]);
        next_permutation(str.begin(),str.end());
        i=l-1;
        j=1;
        n=0;
        while(i>=0)
        {
            n+=(str[i]*j);
            j*=2;
            i--;
        }
        printf("Case %d: %lld\n",++cs,n);
        str.clear();
    }
    return 0;
}
