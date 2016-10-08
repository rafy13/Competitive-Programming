#include<stdio.h>
#include<iostream>
using namespace std;
char s[1000025];
int main()
{
    char x,a[128],y;
    int n,t,i,j;
    cin>>n;
    while(n--)
    {
        cin>>s;
        cin>>t;
        for(i=0;i<128;i++)
            a[i]=i;
        while(t--)
        {
            cin>>x>>y;
            for(i='A';i<='Z';i++)
            {
                if(a[i]==y)
                    a[i]=x;
            }

        }
        for(i=0;s[i];i++)
                cout<<a[s[i]];cout<<a;
        cout<<endl;

    }

}
