#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >graph;
int clr[250];
bool flag;
void bicolouring( int source)
{
    if(!flag)
        return;
    int l=graph[source].size();
    for(int i=0;i<l;i++)
    {
        if(clr[graph[source][i]]!=0&&clr[graph[source][i]]==clr[source])
        {
            flag = 0;
            return;
        }
        if(clr[graph[source][i]]==0)
        {
            if(clr[source]==1)
                clr[graph[source][i]]=2;
            else
                clr[graph[source][i]]=1;
            bicolouring(graph[source][i]);
        }
        if(!flag)
            return;

    }
}

int main()
{
    int n,e,a,b;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        graph.clear();
        graph.resize(n);
        memset(clr,0,sizeof(clr));
        flag = 1;
        scanf("%d",&e);
        while(e--)
        {
            scanf("%d%d",&a,&b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        bicolouring(0);
        if(flag)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
