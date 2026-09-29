#include <stdio.h>

int ehPerfeito(int num) {
    if (num <= 1) return 0;
    
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    
    if (soma == num) {
        return 1;
    } else {
        return 0;
    }
}
