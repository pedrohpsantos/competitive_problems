#include <stdio.h>

int main()
{
    double soma = 0.0;
    for (double i = 1; i <= 100; i++)
    {
        soma += 1 / i;
    }
    printf("%.2lf\n", soma);
    return 0;
}
