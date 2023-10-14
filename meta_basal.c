#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define texto ("veja aqui sua taxa de metabolismo Basal\n")

double form_metabolismo_m(double peso, double altura, int idade) {
    double metabolismo;
    metabolismo = 66.5 + (13.75 * peso) + (5 * altura) - (6.8 * idade);
    return metabolismo;
}

double form_metabolismo_f(double peso, double altura, int idade) {
    double metabolismof;
    metabolismof = 665 + (9.6 * peso) + (1.8 * altura) - (4.7 * idade);
    return metabolismof;
}

int main() {
    char nome[60];
    char sexo[15];
    double metabolismo, metabolismof, altura, peso;
    int idade;

    printf(texto);

    printf("Digite seu nome completo: ");
    scanf(" ");
    fgets(nome, 60, stdin);

    printf("Digite seu sexo: (masculino/feminino) ");
    scanf("%s", sexo);

    printf("escreva sua altura: ");
    scanf("%lf", &altura);

    printf("escreva seu peso:");
    scanf("%lf", &peso);

    printf("informe a sua idade:\n ");
    scanf("%d", &idade);

    if (strcmp(sexo, "masculino") == 0) {
        metabolismo = form_metabolismo_m(peso, altura, idade);
        printf("sua taxa de metabolismo basal = %.2lf\n", metabolismo);
    } else {
        metabolismof = form_metabolismo_f(peso, altura, idade);
        printf("sua taxa de metabolismo basal = %.2lf\n", metabolismof);
    }

    system("pause");

    return 0;
}
