#include <bits/stdc++.h>
using namespace std;

///sieve function and the prime list with P array

int P[1000010];

void sieve()
{
    long long MAX = 1000000;
    long long i;
    for(i = 0; i < MAX; i++)
        P[i] = 1;

    P[0] = P[1] = 0;

    long long m = sqrt(MAX);
    long long k;

    for (i = 2; i <= m; i++)
        if (P[i])
            for (k = i*i; k <= MAX; k += i)
                P[k] = 0;
}

int main()
{
    ///call sieve() function once immediately after main()
    ///so the prime list will be ready
    
    sieve();

    ///now if n is prime then, P[i] == 1
    ///and if n is composite, P[i] == 0
    ///so the index of P array is representing a number and the stored 0 or 1 in that index is telling you if it is prime

    long long i;

    for(i = 0; i <= 100; i++)
        if(P[i])        ///you can also write if(P[i] == 1)
            printf("%lld ", i);

    return 0;
}

