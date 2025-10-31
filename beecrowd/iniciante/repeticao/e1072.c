#include <stdio.h>

int main()
{
    int max, n, in = 0, out = 0;
    scanf("%d", &max);
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &n);
        if (n <= 20 && n >= 10)
            in++;
        else
            out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}