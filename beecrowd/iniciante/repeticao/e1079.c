#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        double a, b, c, media;
        scanf("%lf %lf %lf", &a, &b, &c);
        media = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1lf\n", media);
        i++;
    }
    return 0;
}