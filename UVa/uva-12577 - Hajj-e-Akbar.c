#include<stdio.h>
#include<string.h>
int main()
{
    int i=1,j;
    char c[5];
    while(1)
    {
        gets(c);
        if(c[0]=='*')
            break;

        else if(c[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(c[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
    }
    return 0;
}
