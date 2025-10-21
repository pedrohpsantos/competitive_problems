#include <stdio.h>
#define ll long long
#define limit 800000
int main()
{
    ll sum = 0;
    for (int i = 1; i < limit ; i += 2)
    {
        sum += (ll)i * (ll)i;
    }
    printf("Sum of all odd squares = %lld\n", sum);
    return 0;
}