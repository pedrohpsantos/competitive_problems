#include <stdio.h>

int main()
{
    int max, num;
    scanf("%d", &max);
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            printf("NULL\n");
        }
        else if (num % 2 == 0)
        {
            if (num > 0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }
        else
        {
            if (num < 0)
                printf("ODD NEGATIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
    }
    return 0;
}