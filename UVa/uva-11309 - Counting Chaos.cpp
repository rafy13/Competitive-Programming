#include<bits/stdc++.h>
using namespace std;
bitset<2405>bs;
int ans()
{
    int i,j,num,n,tem;
    for(i=0;i<24;i++)
        for(j=0;j<60;j++)
        {
            num=i*100+j;
            tem=num;
            n=0;
            while(tem!=0)
            {
                n=n*10+tem%10;
                tem/=10;
            }
            if(n==num)
                bs[num]=1;

        }
    return 0;
}
int check(int num)
{
    int m,h,i;
    for(i=num+1;i<2400;i++)
    {
        if(bs[i])
        {
            h=i/100;
            m=i%100;
            if(h<10)
                printf("0%d:",h);
            else printf("%d:",h);
            if(m<10)
                printf("0%d\n",m);
            else printf("%d\n",m);
            return 0;
        }
    }
    printf("00:00\n");
    return 0;

}
int main()
{
    int t,num,h,m;
    char str[10];
    ans();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d",&h,&m);
        num=h*100+m;
        check(num);
    }
    return 0;
}
