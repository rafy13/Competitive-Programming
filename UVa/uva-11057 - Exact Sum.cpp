#include<stdio.h>
#include<bitset>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long books, i, j, book1, book2, money, d, td, p, price[10009];

    while(scanf("%ld",&books)!=EOF)
    {
        bitset<1000109>bs;

        for(i=0;i<books;i++)
        {
            scanf("%ld",&price[i]);
            bs[price[i]]=1;
        }
        scanf("%ld",&money);
        d=money;
        for(i=0;i<books;i++)
        {
            p=money-price[i];
            if(p<0)
                continue;
            if(bs[p])
            {
                td=abs(p-price[i]);
                if(td<d)
                {
                    book1=p;
                    book2=price[i];
                    d=td;
                }
            }
        }
        if(book1>book2)
            swap(book1,book2);
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",book1,book2);
    }
    return 0;
}
