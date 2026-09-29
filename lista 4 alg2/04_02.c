#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

typedef struct {
    Ponto sup_esq;
    Ponto inf_dir;
} Retangulo;

Retangulo ler_retangulo(void) {
    Retangulo r;
    printf("Ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.sup_esq.x, &r.sup_esq.y);
    printf("Ponto inferior direito (x y): ");
    scanf("%f %f", &r.inf_dir.x, &r.inf_dir.y);
    return r;
}

float base(Retangulo r)   { return fabsf(r.inf_dir.x - r.sup_esq.x); }
float altura(Retangulo r) { return fabsf(r.sup_esq.y - r.inf_dir.y); }

float area(Retangulo r)      { return base(r) * altura(r); }
float perimetro(Retangulo r) { return 2 * (base(r) + altura(r)); }
float diagonal(Retangulo r)  { return sqrtf(base(r) * base(r) + altura(r) * altura(r)); }

int main(void) {
    Retangulo r = ler_retangulo();

    printf("Area      = %.2f\n", area(r));
    printf("Diagonal  = %.2f\n", diagonal(r));
    printf("Perimetro = %.2f\n", perimetro(r));
    return 0;
}