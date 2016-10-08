#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum,m;
    char s[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        m=0;sum=0;
        for(i=0;s[i];i++)
        {
            if(s[i]=='O')
            {
                ++m;
                sum+=m;
            }
            else m=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}
