//A.K.M.Rabby(133018)
//Accepted

#include <bitset>
#include<vector>
#include<iostream>
#include<stdio.h>
long long sieve_size;
using namespace std;
bitset<1000011> bs;
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
    sieve(1000003);
    long long  n,fa,la,i,j,key;

    cin>>n;
    while(n--)
    {
        cin>>fa>>la;
        int nm=0,om = 0,gap[160];
        for(i=0;i<160;i++)
            gap[i]=0;
        for(i=0;primes[i+1]<=la;i++)
        {
            if(primes[i]>=fa)
            {
                j= (primes[i+1]-primes[i]);
                gap[j]++;
                if(gap[j]>=nm)
                {

                    om=nm;
                    nm=gap[j];
                    key = j;//cout<<"nm="<<nm<<"  om="<<om<<"  j="<<j<<endl;
                }
            }
        }

        if(nm==0||nm==om)
        {
            cout<<"No jumping champion"<<endl;
        }
        else cout<<"The jumping champion is "<<key<<endl;



    }
    return 0;
}


