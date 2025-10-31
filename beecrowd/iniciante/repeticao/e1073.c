#include <stdio.h>
#include <math.h>
int main()
{
    int n, result;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        result = pow(i, 2);
        printf("%d^2 = %d\n", i, result);
    }
    return 0;
}