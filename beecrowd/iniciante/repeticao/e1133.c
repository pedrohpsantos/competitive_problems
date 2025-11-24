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
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
        swap(&x, &y);
    for (int i = x+1; i < y; i++)
        if (i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
    return 0;
}