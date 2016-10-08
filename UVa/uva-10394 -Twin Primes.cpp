//A.K.M.Rabby
//not submitted
#include <bitset>
#include<vector>
#include<iostream>
#include<stdio.h>
long long sieve_size;
using namespace std;
bitset<20000112> bs;
typedef vector <int> vi;
typedef long long ll;
vi primes;


void sieve(ll upperbound)
{
     ll t=2;
     sieve_size = upperbound + 1;
     bs.set();
     bs[0] = bs[1] = 0;
     for (ll i = 2; i <= sieve_size; i++)
        if (bs[i])
        {
            for (ll j = i * i; j <= sieve_size; j += i)
                bs[j] = 0;
            if((i-t)==2)
                primes.push_back((int)t);
            t=i;

        }
}


int main()
{
    int i;
    sieve(20000010);
    while(scanf("%d",&i)==1)
    {
        printf("(%d, %d)\n",primes[i-1],primes[i-1]+2);
    }
    return 0;
}


