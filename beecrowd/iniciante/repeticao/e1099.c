#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > y)
            swap(&x, &y);
        int j = x + 1, soma = 0;
        while (j < y)
        {
            if (j % 2 != 0)
                soma += j;
            j++;
        }
        printf("%d\n", soma);
        i++;
    }
    return 0;
}