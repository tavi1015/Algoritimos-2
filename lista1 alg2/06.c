#include <stdio.h>

void media(float notaf){
    if(notaf<4.9&&notaf>0.0){
        printf("conceito D");
    }
    if(notaf>5.0&&notaf<6.9){
        printf("conceito C");
    }
    if(notaf>7.0&&notaf<8.9){
        printf("conceito B");
    }
    if(notaf>9.0&&notaf<10.0){
        printf("conceito A");
    }
    if(notaf<0.0||notaf>10){
        printf("invalido");
    }
}

int main(){
    media(11.0);
}