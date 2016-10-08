#include<stdio.h>
#include<vector>
#include<bitset>
#include<iostream>
using namespace std;
vector<int>vi;
void process()
{
    int j,cnt=0,f;
    bitset<10>bs;
    for(int i=0;i<=5005;i++)
    {
        bs.set();
        f=1;
        j=i;
        while(j!=0)
        {
            if( bs[j%10]!=0)
                bs[j%10]=0;
            else
            {
                f=0;
                break;
            }
            j/=10;

        }
        if(f)
            cnt++;
        vi.push_back(cnt);
    }
}
int main()
{
    process();
    int m,n;
    while(scanf("%d%d",&m,&n)==2)
        printf("%d\n",vi[n]-vi[m-1]);
    return 0;
}
