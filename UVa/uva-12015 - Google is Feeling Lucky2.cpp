#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
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
        cin>>d[j].s;
        cin>>d[j].r;
    }
    for(k=0;k<10;k++)
        for(j=k+1;j<10;j++)
        if(d[k].r<d[j].r)
    {
        t=d[k];
        d[k]=d[j];
        d[j]=t;
    }
    j=0;
    printf("Case #%d:\n",i+1);
    while(d[j].r==d[0].r)
    {
        puts(d[j].s);
        j++;
    }

}
return 0;
}
