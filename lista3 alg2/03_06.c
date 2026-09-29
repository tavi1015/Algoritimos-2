#include <stdio.h>

int *busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s) {
    if (tam_s <= 0 || tam_s > tam_v)
        return NULL;

    int *ultimo_inicio = vetor + (tam_v - tam_s);

    for (int *p = vetor; p <= ultimo_inicio; p++) {
        int *a = p;
        int *b = sub;
        while (b < sub + tam_s && *a == *b) {
            a++;
            b++;
        }
        if (b == sub + tam_s)
            return p;
    }
    return NULL;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sub1[] = {4, 5, 6};
    int sub2[] = {4, 6};

    int *r = busca_subvetor(vetor, 8, sub1, 3);
    if (r) printf("sub1 encontrado na posicao %ld\n", (long)(r - vetor));
    else   printf("sub1 nao encontrado\n");

    r = busca_subvetor(vetor, 8, sub2, 2);
    if (r) printf("sub2 encontrado na posicao %ld\n", (long)(r - vetor));
    else   printf("sub2 nao encontrado\n");
    return 0;
}