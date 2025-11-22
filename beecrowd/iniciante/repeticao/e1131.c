#include <stdio.h>

int main()
{
    int esc = 1, gremio = 0, inter = 0, empate = 0;
    do
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
            inter++;
        else if (b > a)
            gremio++;
        else
            empate++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &esc);
    } while (esc == 1);
    int total = gremio + inter + empate;
    printf("%d grenais\n", total);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if (gremio > inter)
        printf("Gremio venceu mais\n");
    else if (inter > gremio)
        printf("Inter venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}