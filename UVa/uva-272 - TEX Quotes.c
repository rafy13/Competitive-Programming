#include<stdio.h>
#include<string.h>
int main()
{
    char c[100000];
    int i,n=0;
    while(gets(c))
    {
        for(i=0;c[i];i++)
        {
            if(c[i]=='"')
                {

            n++;
            if(n%2==0)
                printf("''");
            else printf("``");
                }
        else printf("%c",c[i]);

        }
        printf("\n");
}
return 0;
}
