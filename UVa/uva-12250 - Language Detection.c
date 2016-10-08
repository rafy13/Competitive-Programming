#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    char c[14];

    while(1)
    {
        cin>>c;
        i++;
        if(c[0]=='#')
        break;

        if(c[0]=='H'&&c[1]=='E')
            printf("Case %d: ENGLISH\n",i);
        else if(c[0]=='H'&&c[1]=='O')
            printf("Case %d: SPANISH\n",i);
        else if(c[0]=='H'&&c[1]=='A')
            printf("Case %d: GERMAN\n",i);
        else if(c[0]=='B'&&c[1]=='O')
            printf("Case %d: FRENCH\n",i);
        else if(c[0]=='C'&&c[1]=='I')
            printf("Case %d: ITALIAN\n",i);
        else if(c[0]=='Z'&&c[1]=='D')
            printf("Case %d: RUSSIAN\n",i);
    }
    return 0;
}

