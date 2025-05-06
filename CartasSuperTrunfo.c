#include <stdio.h>


int main() 
{
   char estado1; //Informa uma letra para repesentar o estado de A a H
   char estado2;
   char codigo1[20], codigo2[20];//Código da carta inicial da cidade + um número de 01 a 04
   char cidade1[20], cidade2[20];//Nome da cidade 
   int populacao1, populacao2;//Quantiodade de habitantes na cidade
   int turismo1, turismo2;//Quantidade de pontos turisticos 
   float pib1, pib2;//PIB da cidade
   float area1, area2;// Área em km² da cidade

   printf ("CADASTRAR CARTA 1\n");//Cabeçalho 
   printf("\n");

   printf ("Insira a primeira letra do estado: \n");
   scanf ("%c", &estado1);
   printf ("Insira o nome da cidade: \n");
   scanf ("%s", cidade1);
   printf ("Insira o código - letra do estado + número de 01 a 04: \n");
   scanf ("%s", codigo1);
   printf ("Insira a quantidade da população: \n");
   scanf ("%d", &populacao1);
   printf ("Insira a área da cidade: \n");
   scanf ("%f", &area1);
   printf ("Insira o PIB: \n");
   scanf ("%f", &pib1);
   printf("Insira a quantidade de pontos turisticos: \n");
   scanf ("%d", &turismo1);
   printf("\n");

   printf ("CADASTRAR CARTA 2\n");
   printf("\n");

   printf("Insira a primeira letra do estado: \n");
   scanf ("%c", &estado2);
   printf ("Insira o nome da cidade: \n");
   scanf ("%s", cidade2);
   printf ("Insira o código - letra do estado + número de 01 a 04: \n");
   scanf ("%s", codigo2);
   printf ("Insira a quantidade da população: \n");
   scanf ("%d", &populacao2);
   printf ("Insira a área da cidade: \n");
   scanf ("%f", &area2);
   printf ("Insira o PIB: \n");
   scanf ("%f", &pib2);
   printf("Insira a quantidade de pontos turisticos: \n");
   scanf ("%d", &turismo2);
   printf("\n");

   printf("CARTA 1\n");
   printf("\n");

   printf("Estado: %c\n", estado1);
   printf("Cidade: %s\n", cidade1);
   printf("Código: %s\n", codigo1);
   printf("População da cidade: %d\n", populacao1);
   printf("Área: %.3fKm²\n", area1);
   printf("PIB: %.3f\n", pib1);
   printf("Pontos turisticos: %d\n", turismo1);
   printf("\n");

   printf("CARTA 2\n");
   printf("\n");

   printf("Estado: %c\n", estado2);
   printf("Cidade: %s\n", cidade2);
   printf("Código: %s\n", codigo2);
   printf("População da cidade: %d\n", populacao2);
   printf("Área: %.3fKm²\n", area2);
   printf("PIB: %.3f\n", pib2);
   printf("Pontos turisticos: %d\n", turismo2);

    return 0;
}
