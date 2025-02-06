
#include <stdio.h>
#include <string.h>

    char letra1, letra2; 
    // letra do estado (a ser utilizado no código da carta)
    int numero1, numero2; 
    // número da cidade (a ser utilizado no código da carta)
    int populacao1, populacao2, pturistico1, pturistico2; 
    // informações da cidade (população e os pontos turísticos)
    char estado1[100], estado2[100]; 
    // informações da carta (nome do estado)
    char cidade1[100], cidade2[100]; 
    // informações da carta (nome da cidade)
    float dpopulacional1, pibpercapita1, pib1, area1, dpopulacional2, pibpercapita2, pib2, area2; 
    // densidade populacional, PIB per capita, PIB e área da cidade
    float superpoder1, superpoder2; 
    // soma de todas as propriedades da carta 1 e da carta 2 

void geral1(){

    printf("Digite o nome do estado da primeira carta: \n"); 
    // o usuário é solicitado a enviar o nome do estado
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Digite o nome da cidade da primeira carta: \n"); 
    // o usuário é solicitado a enviar o nome da cidade
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite o código da primeira carta na ordem letra (do estado) e número (da cidade): \n"); 
    // o usuário é solicitado a colocar o código no formato de letra e número (A1, A2, etc)
    scanf(" %c %d", &letra1, &numero1);

    printf("Insira a população e os pontos turísticos da sua cidade: \n"); 
    // o usuário é solicitado a colocar informações da população e da quantidade de pontos turísticos
    scanf("%d %d", &populacao1, &pturistico1);

    printf("Insira a área e o PIB da sua cidade: \n"); 
    // o usuário é solicitado a colocar informações da área e do PIB
    scanf(" %f %f", &area1, &pib1);
    getchar();
}

void geral2(){

    printf("\nDigite o nome do estado da segunda carta: \n"); 
    // o usuário é solicitado a enviar o nome do estado
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o nome da cidade da segunda carta: \n"); 
    // o usuário é solicitado a enviar o nome da cidade
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o código da segunda carta na ordem letra (do estado) e número (da cidade): \n"); 
    // o usuário é solicitado a colocar o código no formato de letra e número (A1, A2, etc)
    scanf(" %c %d", &letra2, &numero2);

    printf("Insira a população e os pontos turísticos da sua cidade: \n"); 
    // o usuário é solicitado a colocar informações da população e da quantidade de pontos turísticos
    scanf("%d %d", &populacao2, &pturistico2);

    printf("Insira a área e o PIB da sua cidade: \n"); 
    // o usuário é solicitado a colocar informações da área e do PIB
    scanf("%f %f", &area2, &pib2);
}

void calculo(){

    dpopulacional1 = (float)populacao1 / area1; 
    // cálculo da densidade populacional através da divisão da população e área da cidade
    pibpercapita1 = (int)populacao1 / pib1; 
    // cálculo do PIB per capita através da divisão da população e do PIB da cidade

    dpopulacional2 = (float)populacao2 / area2; 
    // cálculo da densidade populacional através da divisão da população e área da cidade
    pibpercapita2 = (int)populacao2 / pib2; 
    // cálculo do PIB per capita através da divisão da população e do PIB da cidade

    superpoder1 = populacao1 + pturistico1 + area1 + dpopulacional1 + pib1 + pibpercapita1;
    // soma de todas as propriedades da carta 1
    superpoder2 = populacao2 + pturistico2 + area2 + dpopulacional2 + pib2 + pibpercapita2;
    // soma de todas as propriedades da carta 2
}

void exibicao1(){

    /*Ao colocar o que se pede, o prompt exibirá as seguintes informações:
    Código da Carta 1 (nome)
    Nome do estado 
    Nome da cidade
    População
    Área    
    Pontos turísticos
    PIB        
    Densidade populacional
    PIB per capita
    */

     printf("\nSua carta %c%d contém: \nEstado: %s \nCidade: %s \nPopulação: %d pessoas", letra1, numero1, estado1, cidade1, populacao1);
     printf("\nÁrea: %.2f km² \nPontos turísticos: %d \nPIB: %.3f bilhões de reais", area1, pturistico1, pib1);
     printf("\nDensidade Populacional: %.2f pessoas/km²", dpopulacional1);
     printf("\nPIB per capita: %.0f reais", pibpercapita1); 
    printf("\n----------------------------\n"); // adiciona uma linha de separação
}

void exibicao2(){

    /*Ao colocar o que se pede, o prompt exibirá as seguintes informações:
    Código da Carta 2 (nome)
    Nome do estado
    Nome da cidade
    População
    Área
    Pontos turísticos
    PIB
    Densidade populacional
    PIB per capita
    */

     printf("\nSua carta %c%d contém: \nEstado: %s \nCidade: %s \nPopulação: %d pessoas", letra2, numero2, estado2, cidade2, populacao2);
     printf("\nÁrea: %.2f km² \nPontos turísticos: %d \nPIB: %.3f bilhões de reais", area2, pturistico2, pib2);
     printf("\nDensidade Populacional: %.2f pessoas/km²", dpopulacional2);
     printf("\nPIB per capita: %.0f reais", pibpercapita2); 
     printf("\n----------------------------\n"); // adiciona uma linha de separação
}

void ganhador(){

if (populacao1 > populacao2){
    printf("A carta 1 venceu em população: %d pessoas", populacao1);
} else {
    printf("A carta 2 venceu em população: %d pessoas", populacao2);
}

if (area1 > area2){
    printf("\nA carta 1 venceu em área: %.2f km²", area1);
} else {
    printf("\nA carta 2 venceu em área: %.2f km²", area2);
}

if (dpopulacional1 < dpopulacional2){
    printf("\nA carta 1 venceu em densidade populacional: %.2f pessoas/km²", dpopulacional1);
} else {
    printf("\nA carta 2 venceu em densidade populacional: %.2f pessoas/km²", dpopulacional2);
}

if (pturistico1 > pturistico2){
    printf("\nA carta 1 venceu em pontos turísticos: %d", pturistico1);
} else {
    printf("\nA carta 2 venceu em pontos turístico: %d", pturistico2);
}

if (pib1 > pib2){
    printf("\nA carta 1 venceu em PIB: %.3f bilhões de reais", pib1);
} else {
    printf("\nA carta 2 venceu em PIB: %.3f bilhões de reais", pib2);
}

if (pibpercapita1 > pibpercapita2){
    printf("\nA carta 1 venceu em PIB per capita: %.0f reais", pibpercapita1);
} else {
    printf("\nA carta 2 venceu em PIB per capita: %0.f reais", pibpercapita2);
}

if(superpoder1 > superpoder2){
    printf("\nA carta 1 venceu a partida");
} else {
    printf("\nA carta 2 venceu a partida");
}

}

int main(){

    geral1();
    geral2();
    calculo();
    exibicao1();
    exibicao2();
    ganhador();

    return 0;
}