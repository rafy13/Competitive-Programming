#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char str[10000];
    int i,j,p,l;
    char c;
    while(gets(str))
    {
        if(!strcmp(str,"DONE"))
            break;
        l=strlen(str);
        p=1;

        for(i=0,j=l-1;i<=j;)
        {
            //printf("here i=%d   j=%d\n",i,j);
            while(i<l)
            {
                if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
                {
                    if(str[i]>='a')
                        c=str[i]-32;
                    else c=str[i]+32;
                    break;
                }
                else
                    i++;
            }
            while(j>=0)
            {
                if((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z'))
                    break;
                else
                    j--;
            }
            if(str[j]!=c&&str[j]!=str[i])
            {
                p=0;
                break;
            }
            i++;
            j--;
        }
        if(p)
            printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;

}
