#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
     int t,n,i,j;
     cin>>t;
     for(i=0;i<t;i++)
     {
         cin>>n;
         int r[n];
         for(j=0;c<n;c++)
             cin>>r[0];
         for(j=0;j<n;j++)
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

 }
