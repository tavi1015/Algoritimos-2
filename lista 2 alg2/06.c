#include <stdio.h>
#include <stdint.h> 

int main(){
    int A[10];
    int *pb[10];
    
    for (int i = 0; i <= 9; i++) {
        pb[i] = &A[i];
        
        
        if ((uintptr_t)pb[i] % 2 == 0) {
            printf("esse e o endereco do array na posicao %d: %p\n", i,pb[i]);
        }
    }
    return 0;
}
