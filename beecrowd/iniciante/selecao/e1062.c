#include <stdio.h>

int main()
{
    double n, m;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &n);
        if (n > 0)
        {
            count++;
            m += n;
        }
    }
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", m / count);
    return 0;
}