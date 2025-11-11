#include <stdio.h>
#include <ctype.h>

int main()
{
    int max = 0, qde = 0, i = 0;
    int totalCobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    double porcCoelhos = 0, porcSapos = 0, porcRatos = 0;
    char tipo;

    scanf("%d", &max);

    while (i < max)
    {
        scanf("%d %c", &qde, &tipo);
        if (tolower(tipo) == 'r')
            ratos += qde;
        if (tolower(tipo) == 's')
            sapos += qde;
        if (tolower(tipo) == 'c')
            coelhos += qde;
        totalCobaias += qde;
        i++;
    }

    porcCoelhos = (coelhos * 100.0) / totalCobaias;
    porcRatos = (ratos * 100.0) / totalCobaias;
    porcSapos = (sapos * 100.0) / totalCobaias;

    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", porcCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", porcRatos);
    printf("Percentual de sapos: %.2lf %%\n", porcSapos);

    return 0;
}