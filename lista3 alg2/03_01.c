#include <stdio.h>

#define PI 3.14

void calcular_esfera(float raio, float *area, float *volume) {
    *area = 4 * PI * raio * raio;
    *volume = (4.0f / 3.0f) * PI * raio * raio * raio;
}

int main(void) {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calcular_esfera(raio, &area, &volume);

    printf("Area   = %.2f\n", area);
    printf("Volume = %.2f\n", volume);
    return 0;
}