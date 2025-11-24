#include <stdio.h>

int main()
{
    int esc, a = 0, g = 0, d = 0;
    do
    {
        scanf("%d", &esc);
        if (esc == 1)
            a++;
        else if (esc == 2)
            g++;
        else if (esc == 3)
            d++;
    } while (esc != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}