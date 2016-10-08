#include<stdio.h>
int main()
{
    int T,N,t,i,cnt=1,m,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        m=0;
        j=0;
        for(i=0;i<N;++i)
        {
            scanf("%d",&t);
            m=1+m+t/30;
            j=1+j+t/60;
        }
        m=m*10;
        j=j*15;
        if(m<j)
            printf("Case %d: Mile %d\n",cnt,m);
        else if(m>j)
            printf("Case %d: Juice %d\n",cnt,j);
        else printf("Case %d: Mile Juice %d\n",cnt,j);
        cnt++;
    }
    return 0;
}
