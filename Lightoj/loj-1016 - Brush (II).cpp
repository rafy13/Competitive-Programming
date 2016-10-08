#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int t,cs=0,n,w,x,y,tem,ans;
	vector<int>vct;
	cin>>t;
	while(t--)
	{
		ans=1;
		scanf("%d%d",&n,&w);
		while(n--)
		{
			scanf("%d%d",&x,&y);
			vct.push_back(y);
		}
		sort(vct.begin(), vct.end());
		tem=vct[0];
		for(int i=0;i<vct.size();i++)
		{
			if(tem+w<vct[i])
			{
				tem=vct[i];
				ans++;
			}
		}
		printf("Case %d: %d\n",++cs,ans);
		vct.clear();
	}
	return 0;
}