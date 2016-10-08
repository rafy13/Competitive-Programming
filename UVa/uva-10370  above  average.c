#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d",&m);
    {
        for(a=0;a<m;a++)
        {
        scanf("%d",&n);
        int i,a[n],s=0;
        float t,av,c=0;
        for(i=0;i<n;i++)
            {scanf("%d",&a[i]);
            s+=a[i];
            }
        av=s/n;
        for(i=0;i<n;i++)
            if(a[i]>av)
            c++;
            t=(c/n)*100;
        printf("%.3f%c\n",t,37);

        }
    }
    return 0;

}
