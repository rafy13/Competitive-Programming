#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],st[100],c;
    int i,j,a,k,t,x,y;
    while(gets(s))
    {
        t=1;
        if(s[0]=='#')
            break;
        k=strlen(s);
        strcpy(st,s);
        for(i=k-2;i>=0;i--)
        {
            for(j=k-1;j>i;j--)
                if(s[j]>s[i])
            {
                c=s[j];
                for(a=j;a>i;a--)
                    s[a]=s[a-1];
                s[i]=c;
                for(x=i+1;x<k-1;x++)
                    for(y=x+1;s[y];y++)
                    if(s[x]>s[y])
                    {
                      c=s[x];
                      s[x]=s[y];
                      s[y]=c;
                    }
                if(strcmp(st,s)!=0)
                {t=0;
                break;}
            }
             if(t==0)
                break;
        }
             if(t==0)
                puts(s);

        else
            printf("No Successor\n");
    }
    return 0;
}
