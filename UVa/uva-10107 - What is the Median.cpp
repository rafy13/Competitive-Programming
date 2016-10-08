#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    long long d[10001],i=0,j,k,a,b,t;
    i=0;
    while(cin>>d[i])
    {
        sort(d,d+i+1);


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
