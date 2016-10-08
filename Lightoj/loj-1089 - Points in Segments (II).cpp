#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef vector<int> vi;
vi vct,quary;

struct point
{
    int x,y;
};
vector<point>segment;

void process()
{
    int left,right;
    int l=vct.size();
    int c_sum[l],sum=0;
    memset(c_sum,0,sizeof(c_sum));
    sort(vct.begin(),vct.end());
    for(int i=0;i<segment.size();i++)
    {
        left=(lower_bound(vct.begin(),vct.end(),segment[i].x)-vct.begin());
        right=(upper_bound(vct.begin(),vct.end(),segment[i].y)-vct.begin());
        c_sum[left]++;
        c_sum[right]--;
    }
    for(int i=0;i<l;i++)
    {
        sum+=c_sum[i];
        c_sum[i]=sum;
    }
    for(int i=0;i<quary.size();i++)
    {
        int pos=(lower_bound(vct.begin(),vct.end(),quary[i])-vct.begin());
        printf("%d\n",c_sum[pos]);
    }
}

int main()
{
    int T,n,q,x,y,num,cs=0;
    point tem;
    cin>>T;
    while(T--)
    {
        cin>>n>>q;
        while(n--)
        {
            scanf("%d%d",&x,&y);
            tem.x=x;
            tem.y=y;
            segment.push_back(tem);
            vct.push_back(x);
            vct.push_back(y);
        }
        while(q--)
        {
            scanf("%d",&num);
            quary.push_back(num);
            vct.push_back(num);
        }
        printf("Case %d:\n",++cs);
        process();
        vct.clear();
        segment.clear();
        quary.clear();
    }
    return 0;
}
