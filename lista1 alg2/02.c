#include <stdio.h>
#include <math.h>
void bask(int delta,int a,int b){
    float baskara1=((-b)+sqrt(delta))/(2*a);

    float baskara2=((-b)-sqrt(delta))/(2*a);

    if(delta<0){
        printf("nao e possivel calcular");
    }else{
    printf("essas sao as raízes %.2f %.2f ",baskara1,baskara2);
    }
}

int main(){
    bask(-1,1,-5);


    return 0;
}