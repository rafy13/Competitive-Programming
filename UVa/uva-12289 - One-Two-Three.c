#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,o,t,h;
    char c[5];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>c;
        h=strlen(c);
        if(h==5)
            {printf("3\n");
            continue;
            }
        else
        for(j=0;c[j];j++)

        {
            if(c[j]==''||c[j]=='w'||c[j]=='o')
            t++;
            if(c[j]=='0'c[j]=='n'c[j]=='e')
            o++;
        }
        if(t>=2)
            printf("2\n");
        else if(o>=2)
            printf("1\n");


    }
    return 0;
}

