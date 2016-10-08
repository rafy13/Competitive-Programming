#include <bitset>
#include<vector>
#include<iostream>
#include<math.h>
#include<stdio.h>
long long sieve_size;
using namespace std;
bitset<3300> bs;
typedef vector <int> vi;
typedef long long ll;
vi primes;


void sieve(ll upperbound)
{
     sieve_size = upperbound + 1;
     bs.set();
     bs[0] = bs[1] = 0;
     primes.push_back(2);
     for(ll i = 4; i <= sieve_size; i += 2) bs[i] = 0;
     for (ll i = 3; i <= sieve_size; i++)
        if (bs[i])
        {
            for (ll j = i * i,k=i*2; j <= sieve_size; j += k)
                bs[j] = 0;
            primes.push_back((int)i);
        }
}
int main()
{
    long long t,a;
    sieve(3200);
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        cin>>a;
        printf("Case #%d: %lld = ",i,a);
        int cnt=0;
        int b = sqrt(a);
        for(int j=0;primes[j]<b;j++)
        {
            if(a%primes[j]==0)
            {
                if(cnt==0)
                    printf("%d * %d = ",primes[j],a/primes[j]);
                else printf("%d * %d\n",primes[j],a/primes[j]);
                cnt++;
                if(cnt==2)
                    break;

            }
            int p = primes[j]*primes[j];
            if(a%p==0)
            {
                printf("%d * %d\n",p,a/p);
                    break;

            }
        }
    }
    return 0;
}
