#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int n,m;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        m=sqrt(n);
        if(m*m==n)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
