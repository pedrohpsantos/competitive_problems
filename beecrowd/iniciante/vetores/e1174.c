#include <stdio.h>

int main()
{
    int tam = 100;
    double a[tam], n;
    for (int i = 0; i < tam; i++)
        scanf("%lf", &a[i]);
    for (int i = 0; i < tam; i++)
        if (a[i] <= 10.0)
            printf("A[%d] = %.1f\n", i, a[i]);
    return 0;
}