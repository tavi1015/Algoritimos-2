#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *vetor, int tamanho) {
    int *fim = vetor + tamanho - 1;

    for (int *limite = fim; limite > vetor; limite--) {
        for (int *p = vetor; p < limite; p++) {
            if (*p > *(p + 1))
                swap(p, p + 1);
        }
    }
}

int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    bubble_sort(vetor, tamanho);

    for (int *p = vetor; p < vetor + tamanho; p++)
        printf("%d ", *p);
    printf("\n");
    return 0;
}