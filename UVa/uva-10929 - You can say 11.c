#include<stdio.h>
#include<string.h>
int main()
{
    char str[1050];
    int i,s,l;
    while(1)
    {
        s=0;
        scanf("%s",str);
        l=strlen(str);

        for(i=0;i<l;i++)
        {
            s=s*10+str[i]-'0';
            s=s%11;
        }

        if(s==0 && l==1)
            break;
            else if(s==0)
                printf("%s is a multiple of 11.\n",str);
            else
                printf("%s is not a multiple of 11.\n",str);
        }

    return 0;
}

