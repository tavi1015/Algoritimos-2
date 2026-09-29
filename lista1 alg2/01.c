#include <stdio.h>
#include <math.h>
#define PI 3.14

void esfera(int raio){
    float vol=(4/3)*PI*raio;
    printf("o volume eh %.2f",vol);

}

int main(){
    esfera(4);


    return 0;
}