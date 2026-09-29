#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
} Data;

int bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int dias_no_mes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && bissexto(ano))
        return 29;
    return dias[mes - 1];
}

int data_valida(Data d) {
    if (d.ano < 1 || d.mes < 1 || d.mes > 12 || d.dia < 1)
        return 0;
    return d.dia <= dias_no_mes(d.mes, d.ano);
}

Data ler_data(int numero) {
    Data d;
    do {
        printf("Data %d (dd mm aaaa): ", numero);
        scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
        if (!data_valida(d))
            printf("Data invalida, tente novamente.\n");
    } while (!data_valida(d));
    return d;
}

/* Quantidade de dias desde 01/01/0001 ate a data */
long dias_totais(Data d) {
    long total = 0;
    for (int a = 1; a < d.ano; a++)
        total += bissexto(a) ? 366 : 365;
    for (int m = 1; m < d.mes; m++)
        total += dias_no_mes(m, d.ano);
    return total + d.dia;
}

int main(void) {
    Data d1 = ler_data(1);
    Data d2 = ler_data(2);

    long diferenca = labs(dias_totais(d2) - dias_totais(d1));
    printf("Dias entre as duas datas: %ld\n", diferenca);
    return 0;
}