#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,t1,t2;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1)
            break;
        if(a>b)
            swap(a,b);
        t1=b-a;
        t2=99-b+a+1;
        if(t1<t2)
            printf("%d\n",t1);
        else printf("%d\n",t2);
    }
    return 0;
}
