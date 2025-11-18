#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    while (x > 0 && y > 0)
    {
        if (x > y)
            swap(&x, &y);
        int i = x, soma = 0;
        while (i <= y)
        {
            printf("%d ", i);
            soma += i;
            i++;
        }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &x, &y);
    }
    return 0;
}