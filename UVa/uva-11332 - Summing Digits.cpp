#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,t,i;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        while(n>=10)
        {
            t=n;
            n=0;
            while(t!=0)
            {
                n+=(t%10);
                t/=10;
            }
        }
        cout<<n<<endl;
    }
}
