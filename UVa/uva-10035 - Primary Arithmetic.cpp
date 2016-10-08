#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int p,q;
    while(scanf("%lld%lld",&p,&q)==2)
    {
        if(p==0&&q==0)
            break;
        int c=0,carry=0;
        while(p!=0||q!=0)
        {
            if((p%10+q%10+carry)>=10)
            {
                c++;
                carry = 1;
            }
            else carry=0;
            p/=10;
            q/=10;
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("%d carry operation.\n",c);
        else printf("%d carry operations.\n",c);
    }
    return 0;
}
