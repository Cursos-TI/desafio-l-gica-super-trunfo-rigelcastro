#include <stdio.h>

void main(){

   //Declaracao das VARIAVEIS 
   int populacao01, populacao02, n_turistas01, n_turistas02;
   char estado01[50], estado02[50], cod01[20], cod02[20], nome_cidade01[50], nome_cidade02[50];
   float area01, area02, pib01, pib02, denspop01, denspop02;
   int opcao;

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


   //Calcula as DENSIDADES DEMOGRAFICAS DAS CIDADES
   denspop01 = populacao01 / area01;
   denspop02 = populacao02 / area02;

    printf("\n\n******************************************\n\n");
    
    printf("Para comparar as POPULAÇOES - Digite 1 \n");
    printf("Para comparar as AREAS - Digite 2 \n");
    printf("Para comparar os PIB - Digite 3 \n");
    printf("Para comparar os NUMEROS DE PONTOS TURISTICOS - Digite 4 \n");
    printf("Para comparar as DENSIDADES DEMOGRAFICAS - Digite 5 \n");
    printf("\nEscolha qual caracteristica deseja comparar: ");
    scanf("%d", &opcao);

    printf("\n******************************************\n");

    switch (opcao)
    {
    case 1:
        // POPULAÇOES - variável escolhida para a comparação
        printf("Comparação de Cartas (Atributo: POPULACAO):\n");
        printf("Carta 1 - %s : %d \n", nome_cidade01, populacao01);
        printf("Carta 2 - %s : %d \n", nome_cidade02, populacao02);
        //Estrutura de Decisão para comparar os PIBs e verificar qual é o vencedor  
        populacao01 > populacao02 ? printf("Resultado: Carta 1 (%s) venceu! \n", nome_cidade01) : printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade02);
        break;
    case 2:
        // AREA - variável escolhida para a comparação
        printf("Comparação de Cartas (Atributo: AREA):\n");
        printf("Carta 1 - %s : %.2f \n", nome_cidade01, area01);
        printf("Carta 2 - %s : %.2f \n", nome_cidade02, area02);
        //Estrutura de Decisão para comparar as AREAs e verificar qual é o vencedor  
        area01 > area02 ? printf("Resultado: Carta 1 (%s) venceu! \n", nome_cidade01) : printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade02);
        break;
    case 3:
        // PIB - variável escolhida para a comparação
        printf("Comparação de Cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s : %.2f \n", nome_cidade01, pib01);
        printf("Carta 2 - %s : %.2f \n", nome_cidade02, pib02);
        //Estrutura de Decisão - OPERADOR TERNARIO - para comparar os PIBs e verificar qual é o vencedor 
        pib01 > pib02 ?  printf("Resultado: Carta 1 (%s) venceu! \n", nome_cidade01) : printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade02);
        break;
    case 4:
        // NUM PONTOS TURISTICOS - variável escolhida para a comparação
        printf("Comparação de Cartas (Atributo: PONTOS TURISTICOS):\n");
        printf("Carta 1 - %s : %d \n", nome_cidade01, n_turistas01);
        printf("Carta 2 - %s : %d \n", nome_cidade02, n_turistas02);
        //Estrutura de Decisão para comparar os N PONTOS TURISTICOs e verificar qual é o vencedor  
        n_turistas01 > n_turistas02 ? printf("Resultado: Carta 1 (%s) venceu! \n", nome_cidade01) : printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade02);
        break;
    case 5:
        // DENSIDADE DEMOGRAFICA - variável escolhida para a comparação
        printf("Comparação de Cartas (Atributo: DENSIDADE DEMOGRAFICA):\n");
        printf("Carta 1 - %s : %.2f \n", nome_cidade01, denspop01);
        printf("Carta 2 - %s : %.2f \n", nome_cidade02, denspop02);
        //Estrutura de Decisão para comparar os N PONTOS TURISTICOs e verificar qual é o vencedor  
        denspop01 > denspop02 ? printf("Resultado: Carta 1 (%s) venceu! \n", nome_cidade01) : printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade02);
        break;             
    default:
        break;
    }

}