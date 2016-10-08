#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j,o,t,h;
    char c[6];
    cin>>n;

    for(i=0;i<n;i++)
    {
        o=0;
        t=0;
        cin>>c;
        h=strlen(c);
        if(h==5)
            printf("3\n");
        else{
            for(j=0;c[j];j++)

        {
            if(c[j]=='t'||c[j]=='w'||c[j]=='o')
            t++;
            if(c[j]=='o'||c[j]=='n'||c[j]=='e')
            o++;
        }
        if(t>o)
            printf("2\n");
        else
            printf("1\n");}


    }
    return 0;
}

