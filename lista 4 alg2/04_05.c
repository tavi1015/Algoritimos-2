#include <stdio.h>
#include <string.h>

#define QTD 6

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler_linha(char *s, int n) {
    if (fgets(s, n, stdin))
        s[strcspn(s, "\n")] = '\0';
}

Pessoa ler_pessoa(int numero) {
    Pessoa p;
    printf("\nPessoa %d\n", numero);
    printf("Nome: ");
    ler_linha(p.nome, sizeof(p.nome));
    printf("Nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);
    limpar_buffer();
    return p;
}

/* Transforma a data em um numero comparavel: aaaammdd */
int chave(Data d) {
    return d.ano * 10000 + d.mes * 100 + d.dia;
}

int main(void) {
    Pessoa pessoas[QTD];

    for (int i = 0; i < QTD; i++)
        pessoas[i] = ler_pessoa(i + 1);

    int mais_velha = 0, mais_nova = 0;
    for (int i = 1; i < QTD; i++) {
        if (chave(pessoas[i].nascimento) < chave(pessoas[mais_velha].nascimento))
            mais_velha = i;
        if (chave(pessoas[i].nascimento) > chave(pessoas[mais_nova].nascimento))
            mais_nova = i;
    }

    printf("\nMais velha: %s\n", pessoas[mais_velha].nome);
    printf("Mais nova : %s\n", pessoas[mais_nova].nome);
    return 0;
}