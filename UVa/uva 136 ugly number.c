#include<stdio.h>
void main()
{
    int i,j,n=0,up=0,upt,f,u[5]={2,3,5,6,10,15,30},a,p,s2,s3,s5,s10,s15,s30,pr[300];
    for(i=1;;i++)
    {
        f=1;
        for(j=2;j<=i/2;j++)
        if(i%j==0)
            {
              f=0;
              break;
            }
        if(f)
            p=i;
        for(a=0;a<6;a++)
        {
            n++;
            upt=p*u[a];
            if(upt>up) up=upt;
            if(n==11)
                break;
        }
        if(n==11)
                break;
    }

 printf("%d",up);
 }

