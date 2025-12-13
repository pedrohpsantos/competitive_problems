#include <stdio.h>

int main()
{
    double id = 0, mid = 0;
    int count = 0;
    scanf("%lf", &id);
    while (id > 0)
    {
        mid += id;
        count++;
        scanf("%lf", &id);
    }
    double result = mid / count;
    printf("%.2lf\n", result);
    return 0;
}