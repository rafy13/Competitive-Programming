#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t,k,m[6];
    char p[620];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        for(k=0;k<6;k++)
            m[k]=0;
        for(j=0;p[j];j++)
        {
            switch(p[j])
            {
                case  'A':
                m[0]++;
                continue;
                case  'R':
                m[1]++;
                continue;
                case  'M':
                m[2]++;
                continue;
                case  'G':
                m[3]++;
                continue;
                case  'I':
                m[4]++;
                continue;
                case  'T':
                m[5]++;
                continue;
            }


        }
        m[0]/=3;
        m[1]/=2;
        for(j=0;j<6;j++)
            for(k=1;k<6;k++)
            if(m[j]>m[k])
        {
            t=m[j];
            m[j]=m[k];
            m[k]=t;
        }
        printf("%d\n",m[0]);
    }
    return 0;
}
