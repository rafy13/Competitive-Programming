#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,p,l;
    string str;
    char c;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        str="";
        while((c=getchar())!='\n')
        {
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
                str+=c;
        }
        l = str.length();
        if(sqrt(l)!=(int)sqrt(l))
        {
            printf("Case #%d:\nNo magic :(\n",i);
            continue;
        }
        p=1;
        for(j=0;j<l/2;j++)
            if(str[j]!=str[l-j-1])
            {
                p=0;
                break;
            }
        if(p)
            printf("Case #%d:\n%d\n",i,(int)sqrt(l));
        else printf("Case #%d:\nNo magic :(\n",i);
    }
    return 0;
}
