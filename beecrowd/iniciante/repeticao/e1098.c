#include <stdio.h>

int main()
{
    int int_i = 0;
    while (int_i <= 10)
    {
        double i = int_i / 5.0;
        int int_j = 1;
        while (int_j <= 3)
        {
            double j = i + int_j;
            if (int_i == 0 || int_i == 5 || int_i == 10)
            {
                printf("I=%.0lf J=%.0lf\n", i, j);
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n", i, j);
            }
            int_j++;
        }
        int_i++;
    }
    return 0;
}