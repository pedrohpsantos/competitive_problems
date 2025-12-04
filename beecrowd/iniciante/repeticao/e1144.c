#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int q = 0, c = 0;
        q = pow(i, 2);
        c = pow(i, 3);
        printf("%d %d %d\n", i, q, c);
        printf("%d %d %d\n", i, q + 1, c + 1);
    }

    return 0;
}