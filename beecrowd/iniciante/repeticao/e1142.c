#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; count < n; i++)
    {
        if (i % 4 != 0)
            printf("%d ", i);
        else
        {
            printf("PUM\n");
            count++;
        }
    }
    return 0;
}