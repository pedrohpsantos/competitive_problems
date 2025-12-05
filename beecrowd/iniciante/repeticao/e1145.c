#include <stdio.h>

int main()
{
    int x, y, i = 1;
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++)
    {
        printf("%d", i);
        if (i % x == 0)
            printf("\n");
        else if (i < y)
            printf(" ");
    }
    return 0;
}