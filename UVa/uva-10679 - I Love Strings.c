#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j;
    char ms[100005],ss[1005];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>ms;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>ss;
            if(strstr(ms,ss))
                cout<<"y\n";
            elsecout<<"n\n";
        }
    }
    return 0;
}
