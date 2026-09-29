#include <stdio.h>
#include <string.h>

#define QTD 5

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

void limpar_buffer(void) {
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

/* Bubble sort por idade, do mais velho para o mais novo */
void ordenar_por_idade(Atleta *v, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j].idade < v[j + 1].idade) {
                Atleta temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void imprimir_atletas(Atleta *v, int n) {
    for (int i = 0; i < n; i++)
        printf("%d) %s - %s - %d anos - %.2f m\n",
               i + 1, v[i].nome, v[i].esporte, v[i].idade, v[i].altura);
}

int main() {
    Atleta atletas[QTD];

    for (int i = 0; i < QTD; i++)
        atletas[i] = ler_atleta(i + 1);

    ordenar_por_idade(atletas, QTD);

    printf("\nAtletas do mais velho para o mais novo:\n");
    imprimir_atletas(atletas, QTD);
    return 0;
}