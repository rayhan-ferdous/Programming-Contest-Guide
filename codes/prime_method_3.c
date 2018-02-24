#include <bits/stdc++.h>

using namespace std;

///isPrime function is used to know whether n is a prime number
int isPrime(long long n)
{
    ///if n is 1
    if(n == 1)
        return 0;

    ///if n is 2 its prime
    else if(n == 2)
        return 1;

    ///if n is even its not prime
    else if(n%2 == 0)
        return 0;

    ///if none of the avobe holds, then n is odd and might be prime
    ///testing upto sqrt(n)

    long long m = sqrt(n);
    for (int i = 3; i <= m; i = i + 2)
        if (n%i == 0)
            return 0;

    return 1;
}

int main()
{
    long long n = 100;

    if( isPrime(n) )
        printf("%lld is prime", n);
    else
        printf("%lld is composite", n);

    printf("\n\n");

    ///another test

    if(isPrime(111))
        printf("111 is prime");
    else
        printf("111 is composite");

    printf("\n\n");

    ///primes from 0 to 50
    long long k;

    for(k = 0; k <= 50; k++)
    {
        if(isPrime(k))
            printf("%lld " , k);
    }



    return 0;
}

