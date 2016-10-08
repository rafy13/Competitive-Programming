#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int T,cs=0,n,m;
    int l,d;
    string str;
    deque<int>DQ;
    cin>>T;
    while(T--)
    {
        printf("Case %d:\n",++cs);
        scanf("%d%d",&n,&m);
        while(m--)
        {
            cin>>str;
            l=DQ.size();
            if(str=="pushLeft")
            {
                scanf("%d",&d);
                if(l==n)
                    printf("The queue is full\n");
                else
                {
                    printf("Pushed in left: %d\n",d);
                    DQ.push_front(d);
                }
            }
            else if(str=="pushRight")
            {
                scanf("%d",&d);
                if(l==n)
                    printf("The queue is full\n");
                else
                {
                    printf("Pushed in right: %d\n",d);
                    DQ.push_back(d);
                }
            }
            else if(str=="popLeft")
            {
                if(DQ.empty())
                    printf("The queue is empty\n");
                else
                {
                    printf("Popped from left: %d\n",DQ.front());
                    DQ.pop_front();
                }
            }
            else if(str=="popRight")
            {
                if(DQ.empty())
                    printf("The queue is empty\n");
                else
                {
                    printf("Popped from right: %d\n",DQ.back());
                    DQ.pop_back();
                }
            }
        }
        DQ.clear();
    }
    return 0;
}
