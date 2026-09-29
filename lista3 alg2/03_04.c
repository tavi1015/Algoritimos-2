#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho) {
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;
    int temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    inverte_vetor(vetor, tamanho);

    for (int *p = vetor; p < vetor + tamanho; p++)
        printf("%d ", *p);
    printf("\n");
    return 0;
}