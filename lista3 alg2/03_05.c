#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media) {
    int *p = vetor;
    int *fim = vetor + tamanho;
    int soma = 0;

    *min = *vetor;
    *max = *vetor;

    while (p < fim) {
        if (*p < *min) *min = *p;
        if (*p > *max) *max = *p;
        soma += *p;
        p++;
    }
    *media = (float)soma / tamanho;
}

int main() {
    int vetor[] = {7, 3, 9, -2, 15, 4};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int min, max;
    float media;

    extrair_estatisticas(vetor, tamanho, &min, &max, &media);

    printf("Minimo = %d\nMaximo = %d\nMedia  = %.2f\n", min, max, media);
    return 0;
}