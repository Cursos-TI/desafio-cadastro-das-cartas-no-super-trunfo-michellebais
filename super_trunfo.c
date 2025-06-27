#include <stdio.h>

//Definição das variaveis
int main (){
    int populacao1, populacao2, n_pts_turisticos1, n_pts_turisticos2, id_cidade1, id_cidade2;
    float area1, area2, pib1, pib2;
    char pais1, pais2, estado1, estado2;
    char cidade1[50];
    char cidade2[50];

//Mensagens e Entrada da 1ª Carta
    printf("BEM VINDO! \n");
    printf("\nAtente-se às regras:\n Você pode cadastrar apenas 8 Estados, identificados pelas letras A a H, e para cada Estado inserir 4 Cidades, identificadas por números de 01 a 04! \n");
        
    printf("Agora identifique seu Estado com uma letra de A a H (maiúsculo): \n");
    scanf(" %c", &estado1);

    printf("Indique qual o nome da Cidade (para nomes compostos, utilizar \"_\" ): \n");
    scanf("%s", &cidade1);

    printf("Atribua um número de 01 a 04 para sua Cidade: \n");
    scanf("%d", &id_cidade1);

    printf("Para o jogo ficar mais interessante, indique os dados de cada cidade:\n");
    printf("Qual sua Área? \n");
    scanf("%f", &area1);

    printf("Qual sua População? \n");
    scanf("%d", &populacao1);
    
    printf("Qual seu PIB? \n");
    scanf("%f", &pib1);

    printf("Quantos Pontos Turísticos ela tem? \n");
    scanf("%d", &n_pts_turisticos1);


//Mensagens e Entrada da 2ª Carta
    printf("\n**VAMOS PARA A PRÓXIMA CARTA! \n");
    printf("\nLembrete das regras: 8 Estados, com 4 Cidades cada! \n");
        
    printf("Agora identifique seu Estado com uma letra de A a H (maiúsculo): \n");
    scanf(" %c", &estado2);

    printf("Indique qual o nome da Cidade (para nomes compostos, utilizar \"_\" ): \n");
    scanf("%s", &cidade2);

    printf("Atribua um número de 01 a 04 para sua Cidade: \n");
    scanf("%d", &id_cidade2);

    printf("Para o jogo ficar mais interessante, indique os dados de cada cidade:\n");
    printf("Qual sua Área? \n");
    scanf("%f", &area2);

    printf("Qual sua População? \n");
    scanf("%d", &populacao2);
    
    printf("Qual seu PIB? \n");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turísticos ela tem? \n");
    scanf("%d", &n_pts_turisticos2);


//Demonstrativo em Tela
    printf("\nConfira os dados de suas cartas abaixo: \n");
    printf("\nCarta nº 01\n");
    printf("Estado: %c \n", estado1);
    printf("Código da Carta: %c", estado1);
    printf("%d \n", id_cidade1); //Esta linha com a linha de cima formam o Código da Carta (Estado+Cidade ex: A01)
    printf("Cidade: %s \n", cidade1);
    printf("População: %d hab \n", populacao1); //Sulfixo após a informação
    printf("Área: %.2f m² \n", area1); //Sulfixo após a informação
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", n_pts_turisticos1);

    printf("\nCarta nº 02\n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %c", estado2);
    printf("%d \n", id_cidade2); //Esta linha com a linha de cima formam o Código da Carta (Estado+Cidade ex: A01)
    printf("Cidade: %s \n", cidade2);
    printf("População: %d hab \n", populacao2); //Sulfixo após a informação
    printf("Área: %.2f m² \n", area2); //Sulfixo após a informação
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", n_pts_turisticos2);
    return 0;

}
