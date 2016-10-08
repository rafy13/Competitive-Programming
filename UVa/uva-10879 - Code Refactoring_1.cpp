#include<math.h>
#include<stdio.h>
int main()
{
    int t,a,i,j,b,cnt;
    scanf("%d",&t);
    for(i = 1;i<=t;i++)
    {
        scanf("%d",&a);
        printf("Case #%d: %d = ",i,a);
        cnt=0;
        b = sqrt(a);
        for(j=2;j<=b;j++)
        {
            if(a%j==0)
            {
                if(cnt==0)
                    printf("%d * %d = ",j,a/j);
                else
                {
                    printf("%d * %d\n",j,a/j);
                    break;
                }
                cnt++;
            }
        }
    }
    return 0;
}
