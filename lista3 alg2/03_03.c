#include <stdio.h>

int main() {
    int matriz[3][3];
    int *ptr = &matriz[0][0];
    int soma = 0;

    
    for (int i = 0; i < 9; i++)
        *(ptr + i) = i + 1;

    
    for (int i = 0; i < 9; i++) {
        if (i % 4 == 0)
            soma += *(ptr + i);
    }

    printf("Soma da diagonal principal = %d\n", soma); /* 1 + 5 + 9 = 15 */
    return 0;
}