#include<stdio.h>
#include<string.h>
struct google{
char s[120];
int r;
};
int main()
{
    int i,j,k,l,n;
    scanf("%d",&n);
    struct google d[10],t;
    for(i=0;i<n;i++){

    for(j=0;j<10;j++)
    {
        gets(d[j].s);
        scanf("%d",&d[j].r);
        printf("j=%d\n",j);
    }
    for(k=0;k<n;k++)
        for(j=1;j<n;j++)
        if(d[k].r<d[j].r)
    {
        t=d[k];
        d[k]=d[j];
        d[j]=t;
    }
    j=0;
    printf("Case #%d:\n",i);
    while(d[j].r==d[0].r)
    {
        puts(d[j].s);
        j++;
    }

}
}
