#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,a,b,tn,l,h,x,y,v;
    while(scanf("%lld%lld",&l,&h)==2)
    {
        if(l==0&&h==0)
            break;
        if(l>h)
            swap(l,h);
        n=0;
        v=l;
        for(a=l;a<=h;a++)
        {
            b=a;
            tn=0;
            while(1)
            {
                if(b%2==0)
                    b/=2;
                else
                    b=(3*b)+1;
                tn++;
                if(b==1)
                    break;
            }
            if(tn>n)
            {
                n=tn;
                v=a;
            }

        }

       printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,v,n);

   }
   return 0;
}
