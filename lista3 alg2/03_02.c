#include <stdio.h>

int *buscar(int *vetor, int tamanho, int x) {
    for (int *p = vetor; p < vetor + tamanho; p++) {
        if (*p == x)
            return p;
    }
    return NULL;
}

int main(void) {
    int vetor[] = {4, 8, 15, 16, 23, 42, 15};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int x;

    printf("Digite o valor: ");
    scanf("%d", &x);

    int *r = buscar(vetor, tamanho, x);
    if (r != NULL)
        printf("Encontrado no endereco %p (posicao %ld)\n", (void *)r, (long)(r - vetor));
    else
        printf("Valor %d nao encontrado (NULL)\n", x);
    return 0;
}