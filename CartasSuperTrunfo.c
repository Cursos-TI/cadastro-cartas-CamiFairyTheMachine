#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//váriáveis da carta 1
  char estado;
char codigodacarta[4];
char nomedacidade[30];
int populacao;
float area;
float pib;
int numerodepontosturisticos;

  //váriaveis da carta 2
  char estado2;
char codigodacarta2[4];
char nomedacidade2[30];
int populacao2;
float area2;
float pib2;
int numerodepontosturisticos2;

  // Área para entrada de dados
  
  //Entrada dos dados da carta 1
  printf("Digite os dados da carta 1:\n");
  
  printf("Estado (letra de A a H):\n");
  scanf("%c", &estado);
  
  printf("Código da Carta (Letra do Estado + Número de 1 a 4):\n");
  scanf("%s", &codigodacarta);
  
  printf("Digite o Nome da Cidade:\n");
  scanf("%s", &nomedacidade);
  
  printf("Digite a População:\n");
  scanf("%d", &populacao);
  
  printf("Digite a Área:\n");
  scanf("%f", &area);
  
  printf("Digite o PIB:\n");
  scanf("%f", &pib);
  
  printf("Digite o Número de Pontos Turísticos:\n");
  scanf("%d", &numerodepontosturisticos);

  //Entrada dos dados da carta 2
  printf("\nDigite os dados da carta 2:\n");
  
  printf("Estado (letra de A a H):\n");
  scanf("%c", &estado2);
  
  printf("Código da Carta (Letra do Estado + Número de 1 a 4):\n");
  scanf("%s", &codigodacarta2);
  
  printf("Digite o Nome da Cidade:\n");
  scanf("%s", &nomedacidade2);
  
  printf("Digite a População:\n");
  scanf("%d", &populacao2);
  
  printf("Digite a Área:\n");
  scanf("%f", &area2);
  
  printf("Digite o PIB:\n");
  scanf("%f", &pib2);
  
  printf("Digite o Número de Pontos Turísticos:\n");
  scanf("%d", &numerodepontosturisticos2);

  // Área para exibição dos dados da cidade
  
  //Exibição dos dados da carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigodacarta);
  printf("Nome da Cidade: %s\n", nomedacidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d", numerodepontosturisticos);

  //Exibição dos dados da carta 2
  printf("\nCarta 2: \n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", codigodacarta2);
  printf("Nome da Cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n Km²", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de Pontos Turísticos: %d", numerodepontosturisticos2);


return 0;
} 
