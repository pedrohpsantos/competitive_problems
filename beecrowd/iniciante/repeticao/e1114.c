#include <stdio.h>

int main()
{
    int senha = 2002, n = 0;
    scanf("%d", &n);
    while (n != senha)
    {
        printf("Senha Invalida\n");
        scanf("%d", &n);
    }
    printf("Acesso Permitido\n");
    return 0;
}