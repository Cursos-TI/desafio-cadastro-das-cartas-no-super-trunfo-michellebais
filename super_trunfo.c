#include <stdio.h>

//Definição das variaveis
int main (){
    int n_pts_turisticos1, n_pts_turisticos2, id_cidade1, id_cidade2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2;
    char pais1, pais2, estado1, estado2;
    char cidade1[50], cidade2[50];
    int comp_pop, comp_area, comp_pib, comp_tur, comp_dens, comp_pibpc, comp_spwr;
    float spower1, spower2;


//Mensagens e Entrada das 1ª Carta
    printf("BEM VINDO! \n");
    printf("\nAtente-se às regras:\nVocê pode cadastrar apenas 8 Estados, identificados pelas letras A a H, e para cada Estado inserir 4 Cidades, identificadas por números de 01 a 04! \n");
        
    printf("Agora identifique seu Estado com uma letra de A a H (maiúsculo): \n");
    scanf(" %c", &estado1);

    printf("Indique qual o nome da Cidade (para nomes compostos, utilizar \"_\" ): \n");
    scanf("%s", cidade1);

    printf("Atribua um número de 01 a 04 para sua Cidade: \n");
    scanf("%d", &id_cidade1);

    printf("Para o jogo ficar mais interessante, indique os dados de cada cidade:\n");
    printf("Qual sua Área (em Km²)? \n");
    scanf("%f", &area1);

    printf("Qual sua População (total)? \n");
    scanf("%lu", &populacao1);
    
    printf("Qual seu PIB (em bilhões)? \n");
    scanf("%f", &pib1);

    printf("Quantos Pontos Turísticos ela tem? \n");
    scanf("%d", &n_pts_turisticos1);


//Mensagens e Entrada das 2ª Carta
    printf("\n**VAMOS PARA A PRÓXIMA CARTA! \n");
    printf("\nLembrete das regras: 8 Estados, com 4 Cidades cada! \n");
        
    printf("Agora identifique seu Estado com uma letra de A a H (maiúsculo): \n");
    scanf(" %c", &estado2);

    printf("Indique qual o nome da Cidade (para nomes compostos, utilizar \"_\" ): \n");
    scanf("%s", cidade2);

    printf("Atribua um número de 01 a 04 para sua Cidade: \n");
    scanf("%d", &id_cidade2);

    printf("Para o jogo ficar mais interessante, indique os dados de cada cidade:\n");
    printf("Qual sua Área (em Km²)? \n");
    scanf("%f", &area2);

    printf("Qual sua População (total)? \n");
    scanf("%lu", &populacao2);
    
    printf("Qual seu PIB (em bilhões)? \n");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turísticos ela tem? \n");
    scanf("%d", &n_pts_turisticos2);


//Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpc1 = (pib1 * 1000000000.0) / populacao1;
    pibpc2 = (pib2 * 1000000000.0) / populacao2;

    //Cálculo do Super Poder
    spower1 = (float)populacao1 + area1 + pib1 + n_pts_turisticos1 + (1.0 / densidade1); 
    spower2 = (float)populacao2 + area2 + pib2 + n_pts_turisticos2 + (1.0 / densidade2);

    //Fazendo os Comparativos
    comp_pop = populacao1 > populacao2;
    comp_area = area1 > area2;
    comp_pib = pib1 >pib2;
    comp_tur = n_pts_turisticos1 > n_pts_turisticos2;
    comp_dens = densidade1 < densidade2;
    comp_pibpc = pibpc1 > pibpc2;
    comp_spwr = spower1 > spower2;

//Demonstrativo em Tela
    printf("\nConfira os dados de suas cartas abaixo: \n");
    printf("\nCarta nº 01\n");
    printf("Estado: %c \n", estado1);
    printf("Código da Carta: %c", estado1);
    printf("%d \n", id_cidade1); //Esta linha com a linha de cima formam o Código da Carta (Estado+Cidade ex: A01)
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu hab \n", populacao1); //Sulfixo após a informação
    printf("Área: %.2f km² \n", area1); //Sulfixo após a informação
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", n_pts_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f de reais por pessoa \n", pibpc1);
    printf("Super Poder: %.2f\n", spower1);


    printf("\nCarta nº 02\n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %c", estado2);
    printf("%d \n", id_cidade2); //Esta linha com a linha de cima formam o Código da Carta (Estado+Cidade ex: A01)
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu hab \n", populacao2); //Sulfixo após a informação
    printf("Área: %.2f km² \n", area2); //Sulfixo após a informação
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", n_pts_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f de reais por pessoa \n", pibpc2);
    printf("Super Poder: %.2f\n", spower2);

    printf("\n       **** Vamos ver quem ganhou esta batalha???? ****\n\n");
    printf("Verificando as cartas %c%d (%s) e %c%d (%s), temos:\n\n", estado1, id_cidade1, cidade1, estado2, id_cidade2, cidade2);
    printf("População: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_pop);
    printf("Área: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_area);
    printf("PIB: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_pib);
    printf("Pontos Turisticos: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_tur);
    printf("Densidade Populacional: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_dens);
    printf("PIB per Capita: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_pibpc);
    printf("Super Poder!: %s venceu? (1=SIM; 0=NÃO) :::: %d\n", cidade1, comp_spwr);
    printf("\n\n       **** Até a próxima rodada!! ****\n\n");

    return 0;

}
