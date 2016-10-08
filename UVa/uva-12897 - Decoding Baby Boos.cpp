#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char a[1000009],b,c;
    int i,j,k;
    cin>>k;
    while(k--)
    {
        cin>>a;
        cin>>i;
        while(i--)
        {
            cin>>b>>c;
            for(j=0;a[j];j++)
                if(a[j]==c)
                a[j]=b;
        }
        cout<<a<<endl;
    }
    return 0;
}
