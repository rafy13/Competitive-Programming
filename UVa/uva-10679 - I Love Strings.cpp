#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
using namespace std;
#define MAX 1110
string P,T;
int b[MAX], n, m;
void kmpPreprocess()
{
    int i = 0, j = -1; b[0] = -1;
    m=P.length();
    while (P[i])
    {
        while (j >= 0 && P[i] != P[j])
            j = b[j];
        i++;
        j++;
        b[i] = j;
    }
}
int kmpSearch()
{
    int i = 0, j = 0;
    while (T[i])
        {
            while (j >= 0 && T[i] != P[j])
                j = b[j];
            i++;
            j++;
            if (j == m)
            {
                return 1;
            }
        }
        return 0;
}
int main()
{
    int t,n,m,i,j,k,l;

    cin>>t;


    for(i=0;i<t;i++)
    {
        cin>>T;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>P;
            kmpPreprocess();
            if(kmpSearch())
                printf("y\n");
            else printf("n\n");

        }
    }
    return 0;
}
