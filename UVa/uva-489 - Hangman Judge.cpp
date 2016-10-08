#include<stdio.h>
#include<bitset>
#include<iostream>
using namespace std;

int main()
{
    int t,solve,fasi;
    char c;
    while(scanf("%d",&t)==1)
    {
        bitset<30>word;
        bitset<30>check;
        bitset<30>wrong;
        solve=0;
        fasi=0;
        if(t==-1)
            break;
        getchar();
        while((c=getchar())!='\n')
        {
            if(!word[c-'a'])
                solve++;
            word[c-'a']=1;
        }

        while((c=getchar())!='\n')
        {
            if(fasi==7||solve==0)
                continue;
            if(!word[c-'a'])
            {
                if(!wrong[c-'a'])
                {
                    fasi++;
                    wrong[c-'a']=1;
                }

            }

            else
            {
                if(!check[c-'a'])
                {
                    solve--;
                    check[c-'a']=1;
                }
            }
        }
        printf("Round %d\n",t);
        if(fasi==7)
            printf("You lose.\n");
        else if(solve==0)
            printf("You win.\n");
        else printf("You chickened out.\n");

    }
    return 0;
}
