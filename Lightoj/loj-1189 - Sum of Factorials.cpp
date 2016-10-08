#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll>vll;
int main()
{
    vll factorial(21);
    vi ans;
    factorial[0]=1;
    for(int i=1;i<=20;i++)
        factorial[i]=i*factorial[i-1];
    //for(int i=0;i<=20;i++)
        //cout<<factorial[i]<<endl;
    int T,cs=0;
    ll n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(int i=20;i>=0;i--)
        {
            if(n==0)
                break;
            if(n>=factorial[i])
            {
                n-=factorial[i];
                ans.push_back(i);
            }

        }
        //cout<<n<<endl;
        printf("Case %d: ",++cs);
        if(n==0)
        {
            int l=ans.size();
            for(int i=l-1;i>=0;i--)
            {
                printf("%d!",ans[i]);
                if(i)
                    printf("+");
            }
        }
        else
            printf("impossible");
        printf("\n");
        ans.clear();
    }
    return 0;
}
