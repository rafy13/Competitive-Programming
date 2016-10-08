#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,p;
    char s[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>s;
        p=strlen(s);
        if(strcmp(s,"1")==0||strcmp(s,"4")==0||strcmp(s,"78")==0)
            printf("+\n");
        else{
                if(s[p-1]=='5'&&s[p-2]=='3')
                    printf("-\n");
                else if(strstr(s,"190")==&s[0])
                    printf("?\n");
                else if(s[0]=='9'&&s[p-1]=='4')
                    printf("*\n");
            }
}
return 0;
}
