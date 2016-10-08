#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,sum,i=0,num;
    cin>>T;
    while(T--)
    {
        cin>>n;
        sum=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&num);
            if(num>0)
                sum+=num;
        }
        printf("Case %d: %d\n",++i,sum);
    }
    return 0;
}
