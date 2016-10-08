#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    long long d[10001],i=0,j,k,a,b,t1,t2;
    i=0;
    while(cin>>k)
    {
        for(a=0;a<=i;a++)
            if(d[a]<k)
            {
                t1=d[a];
                d[a]=k;
                while(a<=i)
                {
                    t2=d[a+1];
                    d[a+1]=t1;
                    t1=t2;
                    a++;
                }
                break;
            }


    if(i%2!=0)
    {
        t=(i+1)/2;
        t=((d[t]+d[t-1])/2);
        cout<<t<<endl;
    }
    else
        {
            t=i/2;
            cout<<d[t]<<endl;
        }
        i++;
    }
    return 0;
}
