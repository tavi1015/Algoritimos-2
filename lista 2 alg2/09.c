#include <stdio.h>

void vet(int A[]){

for (int i = 0; i < 3; i++)
{
    int *pa=A;
    printf("Esse e o valor do vetor na posição %d: %p\n",i,*(pa+i));
}


}

int main(){

    int vetor[] ={4,2,3};
    vet(vetor);


    return 0;
}