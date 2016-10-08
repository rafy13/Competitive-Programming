#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long int j,s=0;
    int n,i;
    char c[6];
    cin>>n;

    for(i=0;i<=n;i++)
    {
        cin>>c;
        if(c[0]=='d')
        {
            cin>>j;
            s+=j;
        }
        else if(c[0]=='r')
            printf("%ld\n",s);

    }
    return 0;
}
