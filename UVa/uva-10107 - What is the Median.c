#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    long long d[10001],i=0,j,k,a,b,t;;
    i=0;
    while(scanf("%d",&d[i])==1)
    {
        for(a=0;a<i+1;a++)
        for(b=a+1;b<i+1;b++)
        if(d[a]>d[b])
    {
        t=d[a];
        d[a]=d[b];
        d[b]=t;
    }


    if(i%2!=0)
    {
        t=(i+1)/2;
        t=((d[t]+d[t-1])/2);
        cout<<t;
    }
    else
        {
            t=i/2;
            cout<<d[t];
        }
        i++;
    }
    return 0;
}
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long a[100000],n,i=0,l;
    while(cin>>n)
    {
        a[i]=n;

            sort(a,a+i+1);
        if(i%2==0)
            cout<<a[i/2]<<endl;
        else
        {
            l=a[i/2]+a[i/2+1];
            cout<<l/2<<endl;
        }

        i++;
    }
return 0;
}*/
