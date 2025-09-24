#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigodacarta[4];
char nomedacidade[30];
int populacao;
float area;
float pib;
int numerodepontosturisticos;

  // Área para entrada de dados
  scanf("%s", &estado);
  scanf("%s", &codigodacarta);
  scanf("%s", &nomedacidade);
  scanf("%d", &populacao);
  scanf("%f", &area);
  scanf("%f", &pib);
  scanf("%d", &numerodepontosturisticos);

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %s\n", estado);
  printf("Código da Carta: %s\n", codigodacarta);
  printf("Nome da Cidade: %s\n", nomedacidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d", numerodepontosturisticos);

  
return 0;
} 
