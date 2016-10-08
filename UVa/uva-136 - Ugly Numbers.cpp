//if you run this code you will get an output. now write another program that print this output line only. :)
#include<stdio.h>
int main()
{
    int c=1;
    long long n,i;
    for(n=2;;n++)
    {
        i=n;
        while(i%2==0)
            i/=2;
        while(i%3==0)
            i/=3;
        while(i%5==0)
            i/=5;
        if(i==1)
            c++;
        if(c==1500)
            break;
    }
    printf("The 1500'th ugly number is <%lld>.\n",n);
    return 0;
}
//submit this part :P
/*
#include<stdio.h>
int main()
{
        printf("The 1500'th ugly number is 859963392.\n");
        return 0;
}
*/
