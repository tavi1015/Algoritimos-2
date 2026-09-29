#include <stdio.h>
#include <string.h>

#define QTD 5

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler_linha(char *s, int n) {
    if (fgets(s, n, stdin))
        s[strcspn(s, "\n")] = '\0';
}

Atleta ler_atleta(int numero) {
    Atleta a;
    printf("\nAtleta %d\n", numero);
    printf("Nome: ");
    ler_linha(a.nome, sizeof(a.nome));
    printf("Esporte: ");
    ler_linha(a.esporte, sizeof(a.esporte));
    printf("Idade e altura (m): ");
    scanf("%d %f", &a.idade, &a.altura);
    limpar_buffer();
    return a;
}

int main(void) {
    Atleta atletas[QTD];

    for (int i = 0; i < QTD; i++)
        atletas[i] = ler_atleta(i + 1);

    int mais_alto = 0, mais_velho = 0;
    for (int i = 1; i < QTD; i++) {
        if (atletas[i].altura > atletas[mais_alto].altura)
            mais_alto = i;
        if (atletas[i].idade > atletas[mais_velho].idade)
            mais_velho = i;
    }

    printf("\nMais alto : %s (%.2f m)\n", atletas[mais_alto].nome, atletas[mais_alto].altura);
    printf("Mais velho: %s (%d anos)\n", atletas[mais_velho].nome, atletas[mais_velho].idade);
    return 0;
}