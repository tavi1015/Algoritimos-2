#include <stdio.h>

void tempo(int sg) {
    float horas = sg / 3600.0;
    float minutos=sg/60.0;
    
    printf("esse e o tempo em segundos: %d, esse e o tempo em horas: %.2f e esse e o tempo em minutos: %.2f",sg,horas,minutos);

    
}

int main(){

    tempo(8000);
}

