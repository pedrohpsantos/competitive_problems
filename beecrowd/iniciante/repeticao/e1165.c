#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ehPrimo(int x)
{
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    int limite = (int)sqrt(x);
    for (int i = 3; i <= limite; i += 2)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (ehPrimo(num))
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }
}