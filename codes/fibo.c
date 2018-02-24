#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, a = 0, b = 1;
    long long i;

    long long n = 10;

    for(i = 1; i <= n; i++)
    {
        printf("%lld ", b);

        s = a + b;
        a = b;
        b = s;
    }



    return 0;
}

