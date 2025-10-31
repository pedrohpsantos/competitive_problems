#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}

int main()
{
    int x, y, soma = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x < y)
        swap(&x, &y);
    for (int i = y + 1; i < x; i++)
    {
        if (i % 2 != 0)
            soma += i;
    }
    printf("%d\n", soma);
    return 0;
}