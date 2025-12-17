#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int pa, pb;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        int anos = 0;
        while (pa <= pb)
        {
            pa += (int)(pa * (g1 / 100.0));
            pb += (int)(pb * (g2 / 100.0));

            anos++;

            if (anos > 100)
            {
                break;
            }
        }
        if (anos > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n", anos);
        }
    }
    return 0;
}