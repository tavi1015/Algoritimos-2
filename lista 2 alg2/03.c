#include <stdio.h>

int main(){
    float A[10];

    float *pb[10];

    for (int i = 0; i <= 9; i++)
    {
        pb[i]=&A[i];
        printf("esse e o endereço do array na posição %d: %p\n",i,pb[i]);
    }
    

    return 0;
}