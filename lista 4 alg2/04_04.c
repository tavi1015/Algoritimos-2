#include <stdio.h>

#define QTD 5

typedef struct {
    int hora, minuto, segundo;
} Hora;

Hora ler_hora(int numero) {
    Hora h;
    printf("Hora %d (h m s): ", numero);
    scanf("%d %d %d", &h.hora, &h.minuto, &h.segundo);
    return h;
}

int em_segundos(Hora h) {
    return h.hora * 3600 + h.minuto * 60 + h.segundo;
}

Hora maior_hora(Hora *v, int n) {
    Hora maior = v[0];
    for (int i = 1; i < n; i++)
        if (em_segundos(v[i]) > em_segundos(maior))
            maior = v[i];
    return maior;
}

int main() {
    Hora horas[QTD];

    for (int i = 0; i < QTD; i++)
        horas[i] = ler_hora(i + 1);

    Hora m = maior_hora(horas, QTD);
    printf("Maior hora: %02d:%02d:%02d\n", m.hora, m.minuto, m.segundo);
    return 0;
}