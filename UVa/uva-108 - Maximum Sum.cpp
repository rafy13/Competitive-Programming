#include<bits/stdc++.h>
using namespace std;
int N;
int A[110][110];

int kadane(int i,int j)
{
    int sum=0,mxsum=-10000,t;
    for(int k=0;k<N;k++)
    {
        if(i)
            t=A[k][i-1];
        else t=0;
        sum+=(A[k][j]-t);
        if(sum<0)
            sum=0;
        else if(sum>mxsum)
            mxsum=sum;
    }
    return mxsum;
}

void calc()
{
    int sum,mxsum=-10000;
    for(int i=0;i<N;i++)
        for(int j=i;j<N;j++)
        {
            sum=kadane(i,j);
            if(sum>mxsum)
                mxsum=sum;
        }
    printf("%d\n",mxsum);
}

int main()
{
    while(scanf("%d",&N)==1)
    {
        int mx=-10000;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
            {
                scanf("%d",&A[i][j]);
                if(A[i][j]>mx)
                    mx=A[i][j];
                if(j)
                    A[i][j]=A[i][j]+A[i][j-1];

            }
        if(mx<=0)
        {
            printf("%d\n",mx);
            continue;
        }
        else
            calc();

    }
    return 0;
}
