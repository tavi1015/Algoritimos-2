#include <stdio.h>

void num(){
    int n=1;
    int soma =0;
    int cont=0;
    while(n!=0){
        printf("digite um numero: ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        soma+=n;
        cont++;

    }
    float media=soma/cont;
    printf("essa e a media dos numeros digitados: %.2f",media);
    
}
int main(){
    num();


    return 0;
}
