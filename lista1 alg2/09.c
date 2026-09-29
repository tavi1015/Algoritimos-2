#include <stdio.h>

void som(int n){
    float S=1;
    for (int i =1 ; i <= n; i++)
    {
        S+=(1.0/i);
    }
    printf("esse eh o valor de S: %.2f",S);
}

int main(){
    som(4);
}