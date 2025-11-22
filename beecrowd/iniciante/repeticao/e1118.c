#include <stdio.h>

int main()
{
    int esc = 1;
    do
    {
        int val = 0;
        double media = 0.0, soma = 0.0;
        while (val != 2)
        {
            double nota;
            scanf("%lf", &nota);
            if (nota < 0.0 || nota > 10.0)
                printf("nota invalida\n");
            else
            {
                soma += nota;
                val++;
            }
        }
        media = soma / 2;
        printf("media = %.2lf\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &esc);
        while (esc != 1 && esc != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &esc);
        }
    } while (esc == 1);
    return 0;
}