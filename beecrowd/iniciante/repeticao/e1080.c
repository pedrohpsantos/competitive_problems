#include <stdio.h>
#include <limits.h>

int main()
{
    int maior = INT_MIN;
    int posicaoMaior = 0, i = 0;
    while (i < 100)
    {
        int n;
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
            posicaoMaior = i + 1;
        }
        i++;
    }
    printf("%d\n", maior);
    printf("%d\n", posicaoMaior);
    return 0;
}