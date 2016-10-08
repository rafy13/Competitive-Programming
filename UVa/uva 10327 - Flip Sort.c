#include<stdio.h>
int main()
{
    int i,j,n,c;
    while(scanf("%d",&n)==1)
    {
        int s[n],t=0;
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        for(i=0;i<n;i++)
            for(j=0;j<n-1;j++)
            if(s[j]>s[j+1])
        {
            c=s[j];
            s[j]=s[j+1];
            s[j+1]=c;
            t++;
        }
        printf("Minimum exchange operations : %d\n",t);


    }
    return 0;
}
