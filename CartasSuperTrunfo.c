#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char nome[15];
    int populacao;
    double area;
    int pib;
    int turistico; //número de pontos turísticos
    
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
//Impressão na tela de todos os dados da carta
    printf ("Carta gerada com sucesso!\n\nCódigo: A01\nNome: %s\nPopulação: %d habitantes\nÁrea: %.1lfkm²\nPIB(Produto Interno Bruto): R$%d\nQuantidade de Pontos Turísticos: %d\n\n", nome, populacao, area, pib, turistico);

    return 0;
}
