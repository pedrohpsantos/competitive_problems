#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);
        if (b == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", a / b);
    }
    return 0;
}