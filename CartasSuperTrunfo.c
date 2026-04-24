#include <stdio.h>


int main() {

//Local onde se encontra todas as váriaveis
  char estado, estadoo;
char milhao[10];
char kilometros[10];
char código[20];
char cidade[20];
char milhaoo[10];
char kilometross[10];
char códigoo[20];
char cidadee[20];
int população, turisticos, populaçãoo, turisticoss;
float área, pib, piib, áreaa;
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
scanf("%f%s", &área, kilometros);

printf("PIB: ");
scanf("%f%s", &pib, milhao);

printf("Números de Pontos Turísticos: ");
scanf("%d", &turisticos);
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
scanf("%f%s", &áreaa, kilometross);

printf("PIB: ");
scanf("%f%s", &piib, milhaoo);

printf("Números de Pontos Turísticos: ");
scanf("%d", &turisticoss);



return 0;


}

