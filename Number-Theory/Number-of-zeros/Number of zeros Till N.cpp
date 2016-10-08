#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll zeros_till_n(char str[])/** number_of_zeros(10*N+C) = 10*(number_of_zeros(N)-1) + N - (9-C)*Z + 1. Here Z=number of zeros in N **/
{
    ll N=0,Z=0,C=0,ans=0;
    for(int i=0;str[i];i++)
    {
        ans=10*ans+N-Z*(9-(str[i]-'0'));
        if(str[i]=='0')
            Z++;
        N=N*10+(str[i]-'0');
    }
    return ans+1;
}
int main()
{
    char str[30];
    scanf("%s",&str);
    cout<<zeros(str);
    return 0;
}
