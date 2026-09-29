#include <stdio.h>

void num(int n1, int n2,char sim){
    float resultado =0;
    switch (sim)
    {
    case '*':
        resultado = n1*n2;
        printf("esse e o resultado da operação: %.2f",resultado);

        break;
    case '/':
        resultado = n1/n2;
        printf("esse e o resultado da operação: %.2f",resultado);

        break;
    case '+':
        resultado = n1+n2;
        printf("esse e o resultado da operação: %.2f",resultado);

        break;
    case '-':
        resultado = n1-n2;
        printf("esse e o resultado da operação: %.2f",resultado);

        break;
    default:
        printf("essa operação eh invalida");
        break;
    }
}

int main(){
    num(5,4,'+');
}