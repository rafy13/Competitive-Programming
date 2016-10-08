#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char c[16];

    while(1)
    {
        cin>>c;
        i++;
        if(c[0]=='#')
        break;

        if(strcmp(c,"HELLO")==0)
            printf("Case %d: ENGLISH\n",i);
        else if(strcmp(c,"HOLA")==0)
            printf("Case %d: SPANISH\n",i);
        else if(strcmp(c,"HALLO")==0)
            printf("Case %d: GERMAN\n",i);
        else if(strcmp(c,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",i);
        else if(strcmp(c,"CIAO")==0)
            printf("Case %d: ITALIAN\n",i);
        else if(strcmp(c,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",i);
            else
                printf("Case %d: UNKNOWN\n",i);
    }
    return 0;
}
