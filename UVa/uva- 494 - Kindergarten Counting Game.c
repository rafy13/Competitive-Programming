#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j;
    while(gets(s))
    {
        j=0;
        for(i=0;s[i];i++)
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
               if(s[i+1]<'A'||(s[i+1]>'Z'&&s[i+1]<'a')||s[i+1]>'z')
               j++;
        printf("%d\n",j);
    }
    return 0;
}

