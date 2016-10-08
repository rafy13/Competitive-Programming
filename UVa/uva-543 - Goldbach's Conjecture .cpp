//A.K.M.Rabby
//Accepted
#include <bitset>
#include<vector>
#include<iostream>
#include<stdio.h>
long long sieve_size;
using namespace std;
bitset<10000010> bs;
typedef vector <int> vi;
typedef long long ll;
vi primes;


void sieve(ll upperbound)
{
     sieve_size = upperbound + 1;
     bs.set();
     bs[0] = bs[1] = 0;
     for (ll i = 2; i <= sieve_size; i++)
        if (bs[i])
        {
            for (ll j = i * i; j <= sieve_size; j += i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
}


int main()
{
    sieve(10000000);
    ll n;
    int f = 1;
    while(1)
    {
        int f = 1;
        cin>>n;
        if(n==0)
            break;
        ll j=0;
        for(j=0;primes[j]<=n/2;j++)
        {
            if(bs[n-primes[j]])
            {
                cout<<n<<" = "<<primes[j]<<" + "<<n-primes[j]<<endl;
                f= 0;
                break;

            }
        }
        if(f)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
