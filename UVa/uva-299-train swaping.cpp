#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
     int i,j,n,c,tc,k;
     cin>>tc;
     for(i=0;i<tc;i++)
     {
        cin>>n;
        int s[n],t=0;
        for(j=0;j<n;j++)
            scanf("%d",&s[j]);
        for(k=0;k<n;k++)
            for(j=0;j<n-1;j++)
            if(s[j]>s[j+1])
        {
            c=s[j];
            s[j]=s[j+1];
            s[j+1]=c;
            t++;
        }
        printf("Optimal train swapping takes %d swaps.\n",t);


    }
    return 0;
}
