#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char s[1000],*p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(s);
        if(strcmp(s,"1")==0||strcmp(s,"4")==0||strcmp(s,"78")==0)
            printf("+\n");
        else{
        if((p=strstr(s,"1"))!=0)
            {
                if(p==&s[0])
                    printf("-\n");
                else if(p==(&s[strlen(s)-1]))
                    printf("?\n");
                else printf("*\n");
            }
         if((p=strstr(s,"4"))!=0)
            {
                if(p==&s[0])
                    printf("-\n");
                else if(p==(&s[strlen(s)-1]))
                    printf("?\n");
                else printf("*\n");
            }
         if((p=strstr(s,"78"))!=0)
            {
                if(p==&s[0])
                    printf("-\n");
                else if(p==(&s[strlen(s)-2]))
                    printf("?\n");
                else printf("*\n");
            }
    }
}
}
