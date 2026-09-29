#include <stdio.h>

void vet(int *vetor  ,int valor){


for (int i = 0; i < 10; i++) 
{
    *(vetor+i)=valor;
    printf("Esse e o valor do vetor na posição %d: %d\n",i,*(vetor+i));
}


}

int main(){

    int vetor[10];
    vet(vetor,3);


    return 0;
}