#include<stdio.h>
#include<math.h>

void main()
{
    struct inf
    {
     int x,y;

    };

    int i,j,k,r,a,b,H,g;

    scanf("%d",&r);
    float X,D[r];



    for(g=0;g<r;g++)
    {

    scanf("%d",&i);
    struct inf s[i],t;
    for(j=0;j<i;j++)
    {


        scanf("%d",&s[j].x);
        scanf("%d",&s[j].y);
    }
    for(j=0;j<i-1;j++)
       for(k=j+1;k<i;k++)
       if(s[j].x<s[k].x){
       t=s[j];
       s[j]=s[k];
       s[k]=t;}

       H=s[0].y;
       t=s[0];
       a=0;

       for(b=1;b<i;b++)
       {
        if(H<s[b].y)
        {
            X=((H-t.y)*(t.x-s[b].x)/(t.y-s[b].y)+t.x);
            D[g]+=sqrt(pow((s[b].x-X),2)+pow((s[b].y-H),2));
            H=s[b].y;

        }

        t=s[b];
       }


}
for(g=0;g<r;g++)
    printf("%.2f\n",D[g]);

}
