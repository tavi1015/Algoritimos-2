#include <stdio.h>

int soma(){
    int n;
    int soma=0;
    printf("digite onde deve ser a parada: ");
    scanf("%d",&n);
    for ( int i = 1; i <= n; i++)
    {
        soma+=i;
    }
    printf("o sommatorio eh %d",soma);
}

int main(){
    soma();

    return 0;
}