#include<stdio.h>
int main()
{
    double c,a,month,p,downpayment,monthlypament,lone,blone,value,r,d[110];
    int i,j,k;
    while(scanf("%lf%lf%lf%lf",&month,&downpayment,&lone,&r)==4)
    {
        if(month<0)
            break;

        value=downpayment+lone;
        blone=lone;
        monthlypament = lone/month;
        scanf("%d%lf",&k,&c);
        for(i=1;i<r;i++)
        {
            scanf("%d%lf",&j,&a);
            while(k<j)
            {
                d[k]=c;
                k++;
            }
            d[k]=a;
            k++;
            c=a;
            if(i==r-1)
            {
                while(k<=month)
                {
                    d[k]=c;
                    k++;
                }
            }
        }
        for(i=0;i<=month;i++)
        {
            value-=value*d[i];
            blone=lone-i*monthlypament;
            if(blone<value)
                break;
        }
        if(i==1)
            printf("1 month\n");
        else
            printf("%d months\n",i);


    }
    return 0;
}
