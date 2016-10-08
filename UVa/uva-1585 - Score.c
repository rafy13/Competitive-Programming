#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,s,n,l;
    char S[100];
    scanf("%d",&n);
    while(n--)
    {
       gets(S);
        s=0;
        l=strlen(S);
        while(l--)
        {
            if(S[l]=='O')
            {

                s++;
                j=2;
                while(l--)
                {
                    if(S[l]=='O')
                    {
                        s+=j;
                        j++;
                    }

                    else
                        break;
                }
            }
        }
        printf("%d\n",s);

    }
}

