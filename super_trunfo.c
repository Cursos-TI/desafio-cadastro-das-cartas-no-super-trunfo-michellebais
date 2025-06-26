#include <stdio.h>

//Definição das variaveis
int main (){
    int populacao, n_pts_turisticos, id_carta, id_cidade;
    float area, pib;
    char pais, estado;
    char cidade[50];

//Entrada e Saida de Dados
    printf("BEM VINDO! \n");
    printf("\nAtente-se às regras:\nVocê pode cadastrar apenas 8 Estados, identificados pelas letras A a H, e para cada Estado inserir 4 Cidades, identificadas por números de 01 a 04! \n");
    printf("Para o cadastro da nova carta, inicie indicando qual qual Carta você está cadastrando - de 1 a 32: \n");
    scanf("%i", &id_carta);
        
    printf("Agora identifique seu Estado com uma letra de A a H (maiúsculo): \n");
    scanf(" %c", &estado);

    printf("Indique qual o nome da Cidade (para nomes compostos, utilizar \"_\" ): \n");
    scanf("%s", &cidade);

    printf("Atribua um número de 01 a 04 para sua Cidade: \n");
    scanf("%d", &id_cidade);

    printf("Para o jogo ficar mais interessante, indique os dados de cada cidade:\n");
    printf("Qual sua Área? \n");
    scanf("%f", &area);

    printf("Qual sua População? \n");
    scanf("%d", &populacao);
    
    printf("Qual seu PIB? \n");
    scanf("%f", &pib);

    printf("Quantos Pontos Turísticos ela tem? \n");
    scanf("%d", &n_pts_turisticos);

//Demonstrativo em Tela
    printf("\nConfira os dados de sua carta abaixo: \n");
    printf("Carta nº: %i \n", id_carta);
    printf("Estado: %c \n", estado);
    printf("Código da Carta: %c", estado);
    printf("%d \n", id_cidade); //Esta linha com a linha de cima formam o Código da Carta (Estado+Cidade ex: A01)
    printf("Cidade): %s \n", cidade);
    printf("População: %d hab \n", populacao); //Sulfixo após a informação
    printf("Área: %.2f m² \n", area); //Sulfixo após a informação
    printf("PIB: %.2f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", n_pts_turisticos);

    return 0;

}
