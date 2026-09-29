#include <stdio.h>
#include <string.h>



int contem(char *texto, char *busca) {
    if (*busca == '\0')         
        return 1;

    for (char *p = texto; *p != '\0'; p++) {
        char *a = p;
        char *b = busca;

        while (*a != '\0' && *b != '\0' && *a == *b) {
            a++;
            b++;
        }
        if (*b == '\0')          
            return 1;
    }
    return 0;
}

void ler_linha(char *s, int n) {
    if (fgets(s, n, stdin))
        s[strcspn(s, "\n")] = '\0';
}

int main(void) {
    char texto[200], busca[100];

    printf("Digite a primeira string: ");
    ler_linha(texto, sizeof(texto));
    printf("Digite a segunda string: ");
    ler_linha(busca, sizeof(busca));

    if (contem(texto, busca))
        printf("\"%s\" ocorre dentro de \"%s\".\n", busca, texto);
    else
        printf("\"%s\" NAO ocorre dentro de \"%s\".\n", busca, texto);
    return 0;
}