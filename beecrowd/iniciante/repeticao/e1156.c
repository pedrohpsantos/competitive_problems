#include <stdio.h>

int main()
{
    double soma = 1.0, j = 2.0;
    for (int i = 3; i <= 39; i += 2)
    {
        soma += i / j;
        j *= 2.0;
    }
    printf("%.2lf\n", soma);
    return 0;
}