#include <bits/stdc++.h>

using namespace std;

///isPrime function is used to know whether n is a prime number
int isPrime(long long n)
{
    ///1 and 0 are not prime
    if(n == 1 || n == 0)
        return 0;

    ///test starting from 2 until n-1
    ///if n is divisible by any value of i then function returns 0 and terminates
    ///otherwise it returns 1
    for (int i = 2; i < n; i++)
        if (n%i == 0)
            return 0;

    return 1;
}

int main()
{
    long long n = 4;

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

    ///primes from 0 to 20
    long long k;

    for(k = 0; k <= 20; k++)
    {
        if(isPrime(k))
            printf("%lld " , k);
    }



    return 0;
}

