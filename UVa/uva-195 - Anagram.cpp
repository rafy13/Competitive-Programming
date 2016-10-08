#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool com(char a,char b)
{
    if(tolower(a)==tolower(b))
        return a<b;
    else return tolower(a)<tolower(b);
}
int main()
{
    int t,l;
    scanf("%d",&t);
    getchar();
    char str[10000];
    while(t--)
    {
        scanf("%s",str);
        l=strlen(str);
        sort(str,str+l,com);
        do
        {
            printf("%s\n",str);
        }while(next_permutation(str,str+l,com));
    }
    return 0;
}
