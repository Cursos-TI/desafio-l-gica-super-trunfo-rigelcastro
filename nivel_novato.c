#include <stdio.h>

void main(){

   //Declaracao das VARIAVEIS 
   int populacao01, populacao02, n_turistas01, n_turistas02;
   char estado01[50], estado02[50], cod01[20], cod02[20], nome_cidade01[50], nome_cidade02[50];
   float area01, area02, pib01, pib02;

   //Leitura dos valores da PRIMEIRA CARTA
   printf("Digite o ESTADO da primeira carta: ");
   scanf("%s", &estado01);

   printf("Digite o CÓDIGO da primeira carta: ");
   scanf("%s", &cod01);

   printf("Digite o NOME DA CIDADE da primeira carta: ");
   scanf("%s", &nome_cidade01);

   printf("Digite a POPULAÇAO da primeira carta: ");
   scanf("%d", &populacao01);

   printf("Digite a AREA da primeira carta: ");
   scanf("%f", &area01);

   printf("Digite o PIB da primeira carta: ");
   scanf("%f", &pib01);

   printf("Digite o NUMERO DE PONTOS TURISTICOS da primeira carta: ");
   scanf("%d", &n_turistas01);

   // Leitura dos valores da SEGUNDA CARTA

   printf("\n\nDigite o ESTADO da segunda carta: ");
   scanf("%s", &estado02);

   printf("Digite o CÓDIGO da segunda carta: ");
   scanf("%s", &cod02);

   printf("Digite o NOME DA CIDADE da segunda carta: ");
   scanf("%s", &nome_cidade02);

   printf("Digite a POPULAÇAO da segunda carta: ");
   scanf("%d", &populacao02);

   printf("Digite a AREA da segunda carta: ");
   scanf("%f", &area02);

   printf("Digite o PIB da segunda carta: ");
   scanf("%f", &pib02);

   printf("Digite o NUMERO DE PONTOS TURISTICOS da segunda carta: ");
   scanf("%d", &n_turistas02);

   printf("\n\n******************************************\n\n");

   //O PIB será a variável escolhida para a comparação
   printf("Comparação de Cartas (Atributo: PIB):\n");
   printf("Carta 1 - %s : %f \n", nome_cidade01, pib01);
   printf("Carta 2 - %s : %f \n", nome_cidade02, pib02);

   //Estrutura de Decisão para comparar os PIBs e verificar 
   //qual é o vencedor  
   if( pib01 > pib02){
    printf("Resultado: Carta 1 (%s) venceu! \n", nome_cidade01);
   } else{
    printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade02);
   }
   

}