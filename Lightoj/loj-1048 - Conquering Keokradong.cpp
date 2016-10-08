#include <bits/stdc++.h>
using namespace  std;
int n,k;
vector<int> vct;

bool chk(int mid,int f)//F for printing the result or not
{
	int cnt=0,sum=0;
	for (int i = 0; i <=n; ++i)
	{
		/* code */
		if(vct[i]+sum>mid)
		{
			if(f)
				printf("%d\n", sum);
			sum=vct[i];
			cnt++;
		}
		else
			sum+=vct[i];
	}
	if(f)
		printf("%d\n", sum);
	if(cnt<=k)
		return 1;
	else
		return 0;
}

int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int t,cs=0,tem,mx;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		mx=0;
		for (int i = 0; i <=n; ++i)
		{
			/* code */
			scanf("%d",&tem);
			mx=max(mx,tem);
			vct.push_back(tem);
		}
		
		int up=100000000,lw=0;
		while(lw<=up)
		{
			int mid=(lw+up)/2;
			bool f=chk(mid,0);
			if (f)
				up=mid-1;
			else
				lw=mid+1;
		}
		if(lw<=mx)
		{
			printf("Case %d: %d\n",++cs,mx);
			for(int i=0;i<=n;i++)
				printf("%d\n", vct[i]);
			vct.clear();
			continue;
		}
		else
		{
			printf("Case %d: %d\n",++cs,lw);
			chk(lw,1);
		}
		
		vct.clear();
	}
	return 0;
}