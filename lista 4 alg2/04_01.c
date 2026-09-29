#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[150];
} Pessoa;

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler_linha(char *s, int n) {
    if (fgets(s, n, stdin))
        s[strcspn(s, "\n")] = '\0';
}

Pessoa ler_pessoa() {
    Pessoa p;
    printf("Nome: ");
    ler_linha(p.nome, sizeof(p.nome));
    printf("Idade: ");
    scanf("%d", &p.idade);
    limpar_buffer();
    printf("Endereco: ");
    ler_linha(p.endereco, sizeof(p.endereco));
    return p;
}

void imprimir_pessoa(Pessoa p) {
    
    printf("Nome     : %s\n", p.nome);
    printf("Idade    : %d\n", p.idade);
    printf("Endereco : %s\n", p.endereco);
}

int main(void) {
    Pessoa p = ler_pessoa();
    imprimir_pessoa(p);
    return 0;
}