#include <stdio.h>

int main() {
    int dia_i, dia_f;
    int h_i, m_i, s_i, h_f, m_f, s_f;
    long long inicio, fim, duracao;
    char dia[4];

    scanf("%s %d", dia, &dia_i);
    scanf("%d %*c %d %*c %d", &h_i, &m_i, &s_i);
    scanf("%s %d", dia, &dia_f);
    scanf("%d %*c %d %*c %d", &h_f, &m_f, &s_f);

    inicio = s_i + m_i * 60 + h_i * 3600 + dia_i * 86400;
    fim = s_f + m_f * 60 + h_f * 3600 + dia_f * 86400;
    duracao = fim - inicio;

    int dias = duracao / 86400;
    duracao %= 86400;
    int horas = duracao / 3600;
    duracao %= 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
