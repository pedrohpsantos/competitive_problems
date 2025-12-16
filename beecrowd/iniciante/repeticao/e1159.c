#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    do
    {
        if (n % 2 != 0)
            n++;
        int soma = 0;
        for (int i = 0; i < 5; i++)
        {
            soma += n;
            n += 2;
        }
        printf("%d\n", soma);
        scanf("%d", &n);
    } while (n != 0);
    return 0;
}