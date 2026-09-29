#include <stdio.h>
#include <string.h>

#define QTD 5

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
} Aluno;

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler_linha(char *s, int n) {
    if (fgets(s, n, stdin))
        s[strcspn(s, "\n")] = '\0';
}

Aluno ler_aluno(int numero) {
    Aluno a;
    printf("\nAluno %d\n", numero);
    printf("Matricula: ");
    scanf("%d", &a.matricula);
    limpar_buffer();
    printf("Nome: ");
    ler_linha(a.nome, sizeof(a.nome));
    printf("Notas das 3 provas: ");
    scanf("%f %f %f", &a.notas[0], &a.notas[1], &a.notas[2]);
    limpar_buffer();
    return a;
}

float media(Aluno a) {
    return (a.notas[0] + a.notas[1] + a.notas[2]) / 3;
}

int indice_maior_media(Aluno *alunos, int n) {
    int melhor = 0;
    for (int i = 1; i < n; i++)
        if (media(alunos[i]) > media(alunos[melhor]))
            melhor = i;
    return melhor;
}

int main() {
    Aluno alunos[QTD];

    for (int i = 0; i < QTD; i++)
        alunos[i] = ler_aluno(i + 1);

    Aluno m = alunos[indice_maior_media(alunos, QTD)];
    printf("\nMaior media: %s\n", m.nome);
    printf("Notas: %.1f, %.1f, %.1f (media %.2f)\n",
           m.notas[0], m.notas[1], m.notas[2], media(m));
    return 0;
}