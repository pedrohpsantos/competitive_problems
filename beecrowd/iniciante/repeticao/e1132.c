#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y, soma = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
        swap(&x, &y);
    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
            soma += i;  
    }
    printf("%d\n", soma);
    return 0;
}