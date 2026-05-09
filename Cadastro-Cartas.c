#include <stdio.h>


      int main() {

//Local onde se encontra todas as váriaveis
char estado, estadoo;
  char código[20];
    char cidade[20];
      char códigoo[20];
        char cidadee[20];
      int turisticos,turisticoss, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    unsigned long int população, populaçãoo;
  float área, pib, piib, áreaa, pibPC, piibPC, densidadeP, densidadeeP, superP, superP2;
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
      scanf("%lu", &população);

    printf("Área: ");
  scanf("%fkm²", &área);

  printf("PIB: R$ ");
    scanf("%fM", &pib);

        printf("Número de pontos Turísticos: ");
      scanf("%d", &turisticos);

  densidadeP = (população / área);
printf("Densidade Populacional: %.2fhab/km²\n", densidadeP);

    pibPC = (pib * 1000000 / população);
      printf("Pib per Capita: %.2fR$\n", pibPC);

      superP = (float) população + área + (pib * 1000000) + turisticos + pibPC + densidadeP;
    printf ("Super Poder: %.2f", superP);
//Somando o Super Poder da Carta 1
printf("\n\n");

//Entrada e saída de dados da carta 0
        printf("Carta 0:\n");

    printf("Estado: ");
  scanf(" %c", &estadoo);

      printf("Código: ");
        scanf("%s", códigoo);

    printf("Nome da cidade: ");
  scanf("%s", cidadee);

  printf("População: ");
    scanf("%lu", &populaçãoo);

        printf("Área: ");
      scanf("%fkm²", &áreaa);

  printf("PIB: R$ ");
scanf("%fM", &piib);

    printf("Número de Pontos Turísticos: ");
      scanf("%d", &turisticoss);

        densidadeeP = (populaçãoo / áreaa);
      printf("Densidade Populacional: %.2fhab/km²\n", densidadeeP);
//Calculo feito para calcular a Densidade Populacional

  piibPC = (piib * 1000000 / populaçãoo);
printf("Pib per Capita: %.2fR$\n", piibPC);
//Calculo feito para calcular o Pib per Capita

      superP2 = (float) populaçãoo + áreaa + (piib * 1000000) + turisticoss + piibPC + densidadeeP;
        printf ("Super Poder: %.2f", superP2);
//Somando o Super Poder da Carta 0

  printf("\n\n");
  
  resultado1 = população > populaçãoo;
    resultado2 = área > áreaa;
      resultado3 = pib > piib;
        resultado4 = turisticos > turisticoss;
          resultado5 = pibPC > piibPC;
        resultado6 = densidadeP < densidadeeP;
      resultado7 = superP > superP2;
//Área feita para medir se as vareaveis de una das é maior ou menor que as da outra carta

printf("Comparação de Cartas:\n");
  printf("População: Carta %d vanceu!\n", resultado1);
    printf("Área: Carta %d venceu!\n", resultado2);
      printf("PIB: Carta %d venceu!\n", resultado3);
        printf("Números de pontos turísticos: Carta %d venceu!\n", resultado4);
          printf("PIB per Capita: Carta %d venceu!\n", resultado5);
        printf("Densidade Populacional: Carta %d venceu!\n", resultado6);
      printf("Super Poder: Carta %d venceu!\n", resultado7);
//Área feita para dar os resultados das medidads


return 0;


}



