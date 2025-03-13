#include <stdio.h>


//Teste larissa

int main() {
   printf("CARTA 1 \n");
   char estado [30] = "ESPIRITO SANTO";
   char codigo[5]= "E01";
   char cidade[30]="vila velha";
   int populacao=467722;
   float area=209.965;
   float pib=16.305;
   int pontosturisticos=13;


   printf("Estado: '%s'\n", estado);
   printf("codigo: %s\n", codigo);
   printf("Nome da Cidade: %s\n", cidade);
   printf("Populacao: %d\n", populacao);
   printf("Area: %3.3f km2\n", area);
   printf("PIB: %2.3f mil\n", pib);
   printf("Numero de Pontos Turisticos: %d\n\n\n", pontosturisticos);

   printf("CARTA 2 \n");
   char Estado[30] = "RIO DE JANEIRO";
   char Codigo[5]= "R02";
   char Cidade[30]="NITEROI";
   int Populacao=481749;
   float Area=133.757;
   float Pib=66.345;
   int Pontosturisticos=17;

   printf("Estado: '%s'\n", Estado);
   printf("codigo: %s\n", Codigo);
   printf("Nome da Cidade: %s\n", Cidade);
   printf("Populacao: %d\n", Populacao);
   printf("Area: %3.3f km2\n", Area);
   printf("PIB: %2.3f mil\n", Pib);
   printf("Numero de Pontos Turisticos: %d\n", Pontosturisticos);
    return 0;
}
