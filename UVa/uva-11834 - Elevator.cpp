#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int l,b,p,q,s,t;
    while(1)
    {
        cin>>l>>b>>p>>q;
        if(l==0&&b==0&&p==0&&q==0)
            break;
        if(l>b)
        {
            t=l;
            s=b;
        }
        else
            {
            t=b;
            s=l;
        }
        if(2*p<=s&&2*q<=s&&((l-p-q)*(l-p-q)+(b-p-q)*(b-p-q))>=((p+q)*(p+q)))
            cout<<"S\n";
        else
            cout<<"N\n";

    }
    return 0;
}
