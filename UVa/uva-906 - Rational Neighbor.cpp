#include <cstdio>
#include <cmath>

int main()
{
    long long a, b;
    while (scanf("%lld %lld", &a, &b)==2)
    {
        double n;
        scanf("%lf", &n);
        long long m = static_cast<long long>(ceil(1.0 / (n * b)));
        long long c, d;
        bool done = false;
        for (d = m; ; d++)
        {
            for (c = static_cast<long long>(static_cast<double>(a) * d / b); ; c++)
            {
                long long e = b * c - a * d;
                if (e <= 0)
                    continue;
                if (e <= n * b * d)
                {
                    done = true;
                    break;
                }
                else
                    break;
           }
           if (done)
                break;
        }
        printf("%lld %lld\n", c, d);
    }
    return 0;
}
