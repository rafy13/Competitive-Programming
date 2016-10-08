#include <bits/stdc++.h>
using namespace std;
#define ll long long
int hight[30050];
int n;
ll histogram()
{
    stack<int>st;
    ll ans=0;
    int i=0;
    while(i<n)
    {
        if(st.empty() || hight[st.top()]<=hight[i])
            st.push(i++);
        else
        {
            int top=st.top();
            st.pop();
            ll top_area=hight[top]*(st.empty()?i:i-st.top()-1);
            cout<<"top = "<<top<<" = "<<top_area<<endl;
            ans=max(ans,top_area);
        }
    }
    while(!st.empty())
    {
        int top=st.top();
        st.pop();
        ll top_area=hight[top]*(st.empty()?i:i-st.top()-1);
        cout<<"top = "<<top<<" = "<<top_area<<endl;
        ans=max(ans,top_area);
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {

        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%d",&hight[i]);
        printf("Case %d: ",cs);
        printf("%lld\n",histogram());
    }
    return 0;
}


