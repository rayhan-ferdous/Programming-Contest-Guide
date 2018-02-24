#include <bits/stdc++.h>

using namespace std;

///gcd function
long long GCD(long long a, long long b)
{
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

///lcm function
long long LCM(long long a, long long b)
{
    return a*b/GCD(a, b);
}

int main()
{
    ///to find the gcd or lcm of 2 numbers

    long long a = 12, b = 100;

    printf( "gcd = %lld , lcm = %lld \n", GCD(a, b), LCM(a, b) );

    ///calculate GCD of a and 6

    long long s = GCD(a, 6);

    printf("answer = %lld \n", s);

    ///gcd of 3 numbers

    printf("gcd of a, b and 6 = %lld ", GCD( a , GCD(b, 6) ) );


    return 0;
}

