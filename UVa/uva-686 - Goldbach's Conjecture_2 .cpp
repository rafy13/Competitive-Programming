//A.K.M.Rabby(133018)
//Accepted
#include <bitset>
#include<vector>
#include<iostream>
#include<stdio.h>
long long sieve_size;
using namespace std;
bitset<10000010> bs;
vector<int> primes;


void sieve(long long upperbound)
{
     sieve_size = upperbound + 1;
     bs.set();
     bs[0] = bs[1] = 0;
     for (long long i = 2; i <= sieve_size; i++)
        if (bs[i])
        {
            for (long long j = i * i; j <= sieve_size; j += i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
}


int main()
{
    sieve(10000000);
    long long  n;
    int f = 1;
    while(1)
    {
        int f = 0;
        cin>>n;
        if(n==0)
            break;
        long long j=0;
        for(j=0;primes[j]<=n/2;j++)
        {
            if(bs[n-primes[j]])
                f++;
        }
        cout<<f<<endl;
    }
    return 0;
}

