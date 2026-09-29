#include <stdio.h>

int main() {
    int v[5];
    int *ptr = v;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("\nO dobro de cada valor lido e:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(ptr + i) * 2);
    }

    return 0;
}
