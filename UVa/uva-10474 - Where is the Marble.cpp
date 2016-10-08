#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll q,n;
    int i=0,t;
    vector<int>mrbl;
    while(1)
    {
        scanf("%lld%lld",&n,&q);
        if(n==0&&q==0)
            break;
        printf("CASE# %d:\n",++i);
        while(n--)
        {
            scanf("%d",&t);
            mrbl.push_back(t);
        }
        sort(mrbl.begin(),mrbl.end());
        while(q--)
        {
            scanf("%d",&t);
            vector<int>::iterator low;

            if(binary_search(mrbl.begin(), mrbl.end(),t))
            {
                low=lower_bound(mrbl.begin(),mrbl.end(),t);
                printf("%d found at ",t);
                cout<<(low-mrbl.begin()+1)<<endl;
            }

            else printf("%d not found\n",t);
        }
        mrbl.clear();
    }
    return 0;
}
