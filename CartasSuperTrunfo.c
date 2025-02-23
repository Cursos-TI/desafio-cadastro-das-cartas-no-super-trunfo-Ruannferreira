#include <stdio.h>


int main() {
char estado[10];
char codigo[10];
char cidade[10];
float area;
float pib;
int populacao;
int pontosturisticos;

printf("digite as informacoes da primeira carta! \n");
printf("digite o estado: \n");
scanf( "%s" , estado);

printf("digite o codigo: \n");
scanf( "%s" , codigo);

printf("digite a cidade: \n");
scanf( "%s" , cidade);

printf("digite a area da cidade \n");
scanf( "%f", &area);


printf("digite o pib: \n");
scanf( "%f" , &pib);

printf("digite a populacao: \n");
scanf( "%d", &populacao);

printf("digite a quantidade de pontos turisticos: \n");
scanf( "%d" , &pontosturisticos);


    char estado2[10];
    char codigo2[10];
    char cidade2[10];
    float area2;
    float pib2;
    int populacao2;
    int pontosturisticos2;
    
    printf("digite as informacoes da segunda carta! \n");
    printf("digite o estado: \n");
    scanf( "%s" , estado2);
    
    printf("digite o codigo: \n");
    scanf( "%s" , codigo2);
    
    printf("digite a cidade: \n");
    scanf( "%s" , cidade2);
    
    printf("digite a area da cidade \n");
    scanf( "%f", &area2);
    
    
    printf("digite o pib: \n");
    scanf( "%f" , &pib2);
    
    printf("digite a populacao: \n");
    scanf( "%d", &populacao2);
    
    printf("digite a quantidade de pontos turisticos: \n");
    scanf( "%d" , &pontosturisticos2);
    

    printf("ESTADO: %s - Cidade: %s\n", estado, cidade);
    printf("area: %f\n", area);
    printf("pib: %f\n", pib);
    printf("populacao: %d\n", populacao);
    printf("pontos turisticos: %d\n", pontosturisticos);



    
    printf("ESTADO: %s - Cidade: %s\n", estado2, cidade2);
    printf("area: %f\n", area2);
    printf("pib: %f\n", pib2);
    printf("populacao: %d\n", populacao2);
    printf("pontos turisticos: %d\n", pontosturisticos2);



return 0;


}
