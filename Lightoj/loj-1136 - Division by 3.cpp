#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int T,cs=0,a,b,n1,n2,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        /** n1 is the number of element of the sequence divisible by 3 less then a'th element**/
        n1=2*((a-1)/3);
        if((a-1)%3==2)
            n1++;
        /** n2 is the number of element of the sequence divisible by 3 less or equal to a'th element**/
        n2=2*(b/3);
        if(b%3==2)
            n2++;
        printf("Case %d: %d\n",++cs,n2-n1);

    }
    return 0;
}
