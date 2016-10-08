#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T,cs=0,i;
	stack<string>forword,backword;
    string str,current;
	scanf("%d",&T);
	while(T--)
	{
		printf("Case %d:\n",++cs);
		string current="http://www.lightoj.com/";
		while(cin>>str)
		{
			if(str=="QUIT")
				break;

			if(str=="VISIT")
			{
				backword.push(current);
				cin>>current;
				cout <<current<<endl;
				while(!forword.empty())
					forword.pop();
			}
			else if(str=="BACK")
			{
				if(backword.empty())
				{
					puts("Ignored");
					continue;
				}
				forword.push(current);
				current=backword.top();
				backword.pop();
				cout<<current<<endl;
			}
			else if(str=="FORWARD")
			{
				if(forword.empty())
				{
					puts("Ignored");
					continue;
				}

				backword.push(current);
				current=forword.top();
				forword.pop();
				cout<<current<< endl;
			}
		}
		while(!forword.empty())
            forword.pop();
        while(!backword.empty())
            backword.pop();
	}
	return 0;
}
