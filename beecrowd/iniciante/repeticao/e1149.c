#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d", &a);
    do
    {
        scanf("%d", &n);
    } while (n <= 0);

    int soma = (n * (2 * a + n - 1)) / 2;

    printf("%d\n", soma);

    return 0;
}