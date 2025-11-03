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
unsigned long int populacao;
float area;
float pib;
int numerodepontosturisticos;
float superpoder1;

float superpoder1 = (float) populacao + area + pib + (float) numerodepontosturisticos;  


  //váriaveis da carta 2
  char estado2;
char codigodacarta2[4];
char nomedacidade2[30];
unsigned long int populacao2;
float area2;
float pib2;
int numerodepontosturisticos2;
float superpoder2;

float superpoder2 = (float) populacao2 + area2 + pib2 + (float) numerodepontosturisticos2;

  // Área para entrada de dados
  
  //Entrada dos dados da carta 1
  printf("Digite os dados da carta 1:\n");
  
  printf("\nEstado (letra de A a H):\n");
  scanf("%c", &estado);
  
  printf("Código da Carta (Letra do Estado + Número de 1 a 4):\n");
  scanf("%s", &codigodacarta);
  
  printf("Digite o Nome da Cidade:\n");
  scanf("%s", &nomedacidade);
  
  printf("Digite a População:\n");
  scanf("%lu", &populacao);
  
  printf("Digite a Área:\n");
  scanf("%f", &area);
  
  printf("Digite o PIB:\n");
  scanf("%f", &pib);
  
  printf("Digite o Número de Pontos Turísticos:\n");
  scanf("%d", &numerodepontosturisticos);

// Cálculo da Densidade Populacional e PIB per Capita da carta 1
float densidadepopulacional = (float) populacao / area;
float pibpercapita = pib / (float) populacao;


  //Entrada dos dados da carta 2
  printf("\nDigite os dados da carta 2:\n");
  
  printf("Estado (letra de A a H):\n");
  scanf("%c", &estado2);
  
  printf("Código da Carta (Letra do Estado + Número de 1 a 4):\n");
  scanf("%s", &codigodacarta2);
  
  printf("Digite o Nome da Cidade:\n");
  scanf("%s", &nomedacidade2);
  
  printf("Digite a População:\n");
  scanf("%lu", &populacao2);
  
  printf("Digite a Área:\n");
  scanf("%f", &area2);
  
  printf("Digite o PIB:\n");
  scanf("%f", &pib2);
  
  printf("Digite o Número de Pontos Turísticos:\n");
  scanf("%d", &numerodepontosturisticos2);

  // Cáculo da Densidade Populacional e PIB per Capita da Carta 2
  float densidadepopulacional2 = (float) populacao2 / area2;
float pibpercapita2 = pib2 / (float) populacao2;

  
  
  // Área para exibição dos dados da cidade
  
  //Exibição dos dados da carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigodacarta);
  printf("Nome da Cidade: %s\n", nomedacidade);
  printf("População: %lu\n", populacao);
  printf("Área: %f Km²\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos);
  printf("Densidade Populacional: %3.f\n", densidadepopulacional);
  printf("PIB per Capita: %3.f\n", pibpercapita);
  printf("Super Poder da Carta 1: %f\n", superpoder1);

  //Exibição dos dados da carta 2
  printf("\nCarta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigodacarta2);
  printf("Nome da Cidade: %s\n", nomedacidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %f Km²\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
  printf("Densidade Populacional: %3.f\n", densidadepopulacional2);
  printf("PIB per Capita: %3.f\n", pibpercapita2);
  printf("Super Poder da Carta 2: %f\n", superpoder2);

  // Comparação das Cartas
  
  // Comparação com base na população
  if (populacao > populacao2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }

  // Comparação com base na área
  if (area > area2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }

  // Comparação com base no PIB
  if (pib > pib2) {
    printf("Carta 1 venceu (1)\n");
  } else { 
    printf("Carta 2 venceu (0)\n");
  }
  // Comparação de Número de Pontos Turísticos
  if (numerodepontosturisticos > numerodepontosturisticos2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  // Comparação da Densidade Populacional
  if (densidadepopulacional > densidadepopulacional2) {
    printf("Carta 2 venceu (0)\n");
  } else {
    printf("Carta 1 venceu (1)\n");
  }
  // Comparação do PIB per Capita
  if (pibpercapita > pibpercapita2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  // Comparação do Super Poder
  if (superpoder1 > superpoder2) {
    printf("Carta 1 venceu (1)\n");
 } else {
  printf("Carta 2 venceu (0)\n");
  }



return 0;
} 
