#include<stdio.h>
int main()
{
    int i,j,n,tn,a,b,x,y;
    while(scanf("%d%d",&i,&j)==2)
    {
        n=0;
        if(i<j)
        {
            x=i;y=j;
        }
        else
        {
            x=j;y=i;
        }
        for(a=x;a<=y;a++)
        {
           b=a;
            tn=1;
            while(b!=1)
            {
                if(b%2==0)
                    b/=2;
                else
                    b=(3*b)+1;
                tn++;
            }
            if(tn>n)
            n=tn;
        }

       printf("%d %d %d\n",i,j,n);

   }
   return 0;
}
