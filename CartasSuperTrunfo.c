#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2  - Densidade Populacional e PIB per Capita

int main() {

    char nome[100];
    int populacao;
    double area;
    int pib;
    int turistico;
    
//bloco de dados destinado à coleta dos dados das cartas:
    printf("Olá, bem-vindo ao Maker de Cards do Super Trunfo Cidades\nPara começar, digite o nome da cidade:\n");
    scanf("%14s", nome); //Uso do núemero 14 antes do s em #s para assegurar que o usuário não ultrapasse o limite de caracteres definido.

    printf("%s possui quantos habitantes?\n", nome); //utilização da primeira informação concebida pela usuário sendo representado pelo "%s".
    scanf("%d", &populacao);

    printf("qual a sua área em km²? (utilize \".\" (ponto) para números decimais)\n");
    scanf("%lf", &area);

    printf("Qual é o PIB em R$?\n"); //o \(contra-barra) permite utilizar aspas em meio a uma frase.
    scanf("%d", &pib);

    printf("Quantos pontos turísticos %s possui?\n", nome); //utilização da primeira informação concebida pela usuário sendo representado pelo "%s".
    scanf("%d", &turistico);
    printf("\n");

    double pibpercap = (double) pib / (double) populacao; 
    /* para calculo do PIB per Capita, como o resultado pode ser decimal, é
necessário converter os dados, mas somente na saída. */

    double densidadepop = (double) populacao / area; 
    /* no caso da densidade Populacional é necessário converter, como são
dois tipos diferentes de dados.*/

//Impressão na tela de todos os dados da carta
    printf ("Carta gerada com sucesso!\n\nCódigo: A01\nNome: %s\nPopulação: %d habitantes\nÁrea: %.1lfkm²\nPIB(Produto Interno Bruto): R$%d\nQuantidade de Pontos Turísticos: %d\nPIB per Capita: R$%.2lf\nDensidade Populacional: %.2lf Habitantes por Quilômetro Quadrado\n\n", 
    nome, populacao, area, pib, turistico, pibpercap, densidadepop);

    return 0;
}
