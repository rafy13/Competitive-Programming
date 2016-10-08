#include<bits/stdc++.h>
using namespace std;
int main()
{
    char bob[]="Bob",alice[]="Alice",str[8];
    //cout<<bob<<"   "<<alice<<endl;
    long long int n,i=0,T;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %s",&n,&str);
        //cout<<str<<endl;
        if(str[0]=='A')
        {
            if(n%3==1)
                printf("Case %lld: %s\n",++i,bob);
            else
                printf("Case %lld: %s\n",++i,str);
        }
        else
        {
            if(n%3==0)
                printf("Case %lld: %s\n",++i,alice);
            else
                printf("Case %lld: %s\n",++i,str);
        }

    }
    return 0;
}
