//A.K.M.Rabby(133018)
//not Accepted

#include <bitset>
#include<vector>
#include<iostream>
#include<stdio.h>
long long sieve_size;
using namespace std;
bitset<1000011> bs;
vector<int> primes;
int length;

int binarysearch(int key)
{
    int mn = 0;
    int mx = length-1;
    while(mx>=mn)
    {
        int mid = (mn+mx)/2;
        if(key<primes[mid])
            mx = mid - 1;
        else if(key>primes[mid])
            mn = mid + 1;
        else return mid;

    }
    mx-=2;
    return mx;
}


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
        length = primes.size();
}


int main()
{
    sieve(1000030);
    long long  n,fa,la,i,j,key;

    cin>>n;
    while(n--)
    {
        cin>>fa>>la;
        if(fa==1)
            fa = 2;
        int nm=0,om = 0,gap[150];
        for(i=0;i<150;i++)
            gap[i]=0;

        for(i = binarysearch(fa);primes[i+1]<=la;i++)
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

        if(nm==0||nm==om)
        {
            cout<<"No jumping champion"<<endl;
        }
        else cout<<"The jumping champion is "<<key<<endl;



    }
    return 0;
}

