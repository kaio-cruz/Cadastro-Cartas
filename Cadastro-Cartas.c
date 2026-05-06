#include <stdio.h>


      int main() {

//Local onde se encontra todas as váriaveis
char estado, estadoo;
  char código[20];
    char cidade[20];
      char códigoo[20];
        char cidadee[20];
      int  turisticos, população, populaçãoo, turisticoss;
    float área, pib, piib, áreaa, pibPC, piibPC, densidadeP, densidadeeP;
//Cada uma dessas váriaveis identifica uma caracteristica das cartas

//Entrada e saída de dados da carta 1
printf("Carta 1:\n");

    printf("Estado: ");
      scanf("%c", &estado);

      printf("Código: ");
    scanf("%s", código);

  printf("Nome da cidade: ");
scanf("%s", cidade);

    printf("População: ");
      scanf("%d", &população);

    printf("Área: ");
  scanf("%fkm²", &área);

  printf("PIB: R$ ");
    scanf("%fM", &pib);

        printf("Números de pontos Turísticos: ");
      scanf("%d", &turisticos);

  densidadeP = (população / área);
printf("Densidade Populacional: %.2fhab/km²\n", densidadeP);

    pibPC = (pib * 1000000 / população);
      printf("Pib per Capita: %.2fR$\n", pibPC);

        printf("\n\n");

//Entrada e saída de dados da carta 2
        printf("Carta 2:\n");

    printf("Estado: ");
  scanf(" %c", &estadoo);

      printf("Código: ");
        scanf("%s", códigoo);

    printf("Nome da cidade: ");
  scanf("%s", cidadee);

  printf("População: ");
    scanf("%d", &populaçãoo);

        printf("Área: ");
      scanf("%fkm²", &áreaa);

  printf("PIB: R$ ");
scanf("%fM", &piib);

    printf("Números de Pontos Turísticos: ");
      scanf("%d", &turisticoss);

        densidadeeP = (populaçãoo / áreaa);
      printf("Densidade Populacional: %.2fhab/km²\n", densidadeeP);
//Calculo feito para calcular a Densidade Populacional

  piibPC = (piib * 1000000 / populaçãoo);
printf("Pib per Capita: %.2fR$\n", piibPC);
//Calculo feito para calcular o Pib per Capita


return 0;


}

