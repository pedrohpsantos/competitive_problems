#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        return 0;
    int n1 = 0, n2 = 1, fibo;
    printf("%d", n1);
    if (n > 1)
        printf(" %d", n2);
    for (int i = 2; i < n; i++)
    {
        fibo = n1 + n2;
        printf(" %d", fibo);
        n1 = n2;
        n2 = fibo;
    }
    printf("\n");
    return 0;
}