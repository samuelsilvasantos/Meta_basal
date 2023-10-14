#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define texto ("Descubra sua Taxa de Metabolismo Basal \n")
int main()
{
    char nome[60], sexo[10];
    double metabolismo, metabolismof, altura, peso;
    int idade;
    
    printf(texto);
   
    printf("Digite seu nome completo: ");
    scanf(" ");
    fgets(nome, 60, stdin);

    printf("Digite o sexo (masculino/feminino): ");
    scanf("%s", sexo);

    printf("escreva sua altura: ");
    scanf("%lf", &altura);

    printf("escreva seu peso: ");
    scanf("%lf", &peso);

    printf("informe a sua idade: ");
    scanf("%d", &idade);
    
   if (strcmp (sexo , "masculino") == 0) {
     metabolismo = (10 * peso) + (6.25 * altura) - (5 * idade) + 5;
      printf("sua taxa de metabolismo basal = %.2lf\n", metabolismo);
   
} else {
     metabolismof = (10 * peso) + (6.25 * altura) - (5 * idade) - 161;
     printf("sua taxa de metabolismo basal = %.2lf\n", metabolismof);

}
    system("pause");

    return 0;
}
