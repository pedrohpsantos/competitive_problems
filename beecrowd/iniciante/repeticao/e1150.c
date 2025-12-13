#include <stdio.h>

int main()
{
    int x, z;
    scanf("%d", &x);
    do
    {
        scanf("%d", &z);
    } while (z <= x);

    int count = 0, soma = 0, numAtual = x;
    while (soma < z)
    {
        soma += numAtual;
        numAtual++;
        count++;
    }
    printf("%d\n", count);
    return 0;
}