#include<stdio.h>
#include<math.h>

int main()
{
    double a,N,M,x,y,q,X,Y,X1,Y1,A;
    while(1)
    {
        scanf("%lf%lf",&N,&a);
        if(N==0&&a==0)
            break;
        M=0;
        q=N;
        while(q--)
        {

            scanf("%lf%lf",&x,&y);
            X=x*x;
            Y=y*y;
            X1=(x-a)*(x-a);
            Y1=(y-a)*(y-a);
            A=a*a;
            if(X+Y<=A&&X+Y1<=A&&X1+Y<=A&&X1+Y1<=A)
            {
                M++;
            }

        }
        printf("%.5lf\n",(M*A/N));
    }
    return 0;
}
