
#include <stdio.h>

int main() {

  
    // Declaração das variáveis da Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo"; 
    int populacao1 = 12325000;
    float area1 = 1521.11f;
    float pib1 = 699.28f;
    int pontosturisticos1 = 50;

   // Declaração das variáveis da Carta 2
    char estado2 = 'B';               
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontosturisticos2 = 30;


  
    // Exibição dos dados da Carta 1
    printf("Carta \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);


    // Exibição dos dados da Carta 2 (opcional)
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
