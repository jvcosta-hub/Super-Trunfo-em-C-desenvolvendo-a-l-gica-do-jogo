#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    // Programa Elaborado por Joao Victor
    // Desafios > Nivel Novato > Nível Aventureiro > Nível Mestre > Concluídos !

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Variáveis     

    char estado1, estado2;
    char cod1[3], cod2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2, vs_populacao;
    float area1, area2, vs_area; 
    float pib1, pib2, vs_pib;
    float densid_1, densid_2, pib_capt1, pib_capt2, vs_densid, vs_pib_capt;
    int turistico1, turistico2, vs_turistico;
    float superpoder1, superpoder2, inv_densid_1, inv_densid_2, vs_superpoder;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    // Carta1, entrada e saida de dados:
    
    printf("\n");    
    printf("Cadastrando Carta1\n");
   
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado1);
    

    printf("Gerando código para a carta, escolha uma númeração de 01 a 04 (ex:01,02,03 ou 04): ");
    scanf("%s", cod1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população de %s: ", cidade1);
    scanf("%lu", &populacao1);

    printf("Digite a área em km² de %s: ", cidade1);
    scanf("%f", &area1);
   
    printf("Digite o PIB de %s: ", cidade1);
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turisticos de %s: ", cidade1);
    scanf("%d", &turistico1);

    //Calculando variáveis carta 1 

    densid_1 = (float) (populacao1 / area1); 
    pib_capt1 = (float) (pib1 * 1000000000) / populacao1;
    inv_densid_1 = 1.0 / densid_1;
    superpoder1 = (float) (populacao1 + pib1 + turistico1 + pib_capt1 + inv_densid_1);

    // Carta2, entrada e saida de dados:
    
    printf("\n ");    
    printf("Cadastrando Carta2\n");
    
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Gerando código para a carta, escolha uma númeração de 01 a 04 (ex:01,02,03 ou 04): ");
    scanf("%s", cod2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população de %s: ", cidade2);
    scanf("%lu", &populacao2);

    printf("Digite a área em km² de %s: ",cidade2);
    scanf("%f", &area2);

    printf("Digite o PIB de %s: ",cidade2);
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos de %s: ", cidade2);
    scanf("%d", &turistico2);

    //Calculando variáveis carta 2

    densid_2 = (float) (populacao2 / area2); 
    pib_capt2 = (float) (pib2 * 1000000000) / populacao2;
    inv_densid_2 = 1.0 / densid_2;
    superpoder2 = (float) (populacao2 + pib2 + turistico2 + pib_capt2 + inv_densid_2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Carta1 exibição das informações em tela:

    printf("\nCarta 1:\n");    
    printf("Estado: %c\n", estado1);
    printf("Código:%c%s\n", estado1, cod1); //gerando código da carta.
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%lu\n", populacao1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", turistico1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densid_1);
    printf("PIB per Capita: %.2f reais\n", pib_capt1);
    printf("Inverso densidade populacional: %f\n", inv_densid_1);
    printf( "Super poder: %f\n", superpoder1);
    

    //Carta2 exibição das informações em tela:

    printf("\nCarta 2:\n");    
    printf("Estado:%c\n", estado2);
    printf("Código:%c%s\n", estado2, cod2); //gerando código da carta.
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%lu\n", populacao2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densid_2);
    printf("PIB per Capita: %.2f reais\n", pib_capt2);
    printf("Inverso densidade populacional: %f\n", inv_densid_2);
    printf("Super poder: %f\n", superpoder2);

    //Comparando as Cartas

    vs_populacao = (unsigned long int) populacao1 > populacao2;
    vs_area = area1 > area2;
    vs_pib = pib1 > pib2;
    vs_turistico = turistico1 > turistico2;
    vs_densid = densid_1 < densid_2;
    vs_pib_capt = pib_capt1 > pib_capt2;
    vs_superpoder = superpoder1 > superpoder2;

    // Exibindo resultado das comparações das cartas

    printf("\n***************************************************\n");
    printf("************** COMPARAÇÃO DAS CARTAS **************\n");
    printf("***************************************************\n");
    printf("*            VALOR: 1 - VENCE CARTA 1             *\n");
    printf("*            VALOR: 0 - VENCE CARTA 2             *\n");
    printf("* População             : %d                       *\n", (int) vs_populacao);
    printf("* Área                  : %d                       *\n", (int) vs_area );
    printf("* PIB                   : %d                       *\n", (int) vs_pib);
    printf("* Pontos Turismo        : %d                       *\n", (int) vs_turistico);
    printf("* Densidade Populacional: %d                       *\n", (int) vs_densid);
    printf("* PIB per Capita        : %d                       *\n", (int) vs_pib_capt);
    printf("* Super Poder:          : %d                       *\n", (int) vs_superpoder);
    printf("***************************************************\n");

    // Comparação utilizando condicionais.
    // Desenvolvendo lógica do jogo Nível novato, utilizando estruturas de decisão.
    // Menu interativo
    printf("***Escolha um atribuito para comparação***\n1. População\n2. Área\n3. PIB\n4.Pontos Turísticos\n5. Opção inválida\nEscolha=> ");
    switch (vs_populacao)
    {
    case 1:
        if(populacao1 == populacao2)
        {
            printf("*** EMPATE! ***\n");
            printf("Carta1 - :%s              População:%lu       \n", cidade1, populacao1);
            printf("Carta2 - :%s              População:%lu       \n", cidade2, populacao2);
                }if else(populacao1 > populacao2)
                {
                    printf("Carta1 - :%s              VENCEU!\n", cidade1);
                    printf("Carta1 - :%s              População:%lu       \n", cidade1, populacao1);
                    printf("Carta2 - :%s              População:%lu       \n", cidade2, populacao2);
                }else
                {
                    printf("Carta2 - :%s              VENCEU!\n", cidade2);
                    printf("Carta1 - :%s              População:%lu       \n", cidade1, populacao1);
                    printf("Carta2 - :%s              População:%lu       \n", cidade2, populacao2);  
                }
                
        break;
        
    
    default:
        break;
    }
    /*
    printf("\nComparação de Cartas, (Atributo: População)\n");
    printf("Carta1 - :%s          População:%lu                  \n",cidade1, populacao1);
    printf("Carta2 - :%s          População:%lu                  \n",cidade2, populacao2);
    if(populacao1 > populacao2){
        printf(" Carta1  :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }    

    printf("\nComparação de Cartas, (Atributo: Area)\n");
    printf("Carta1 - :%s          Area:%.2f                        \n",cidade1, area1);
    printf("Carta2 - :%s          Area:%.2f                        \n",cidade2, area2);
    if(area1 > area2){
        printf("Carta1   :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }

    printf("\nComparação de Cartas, (Atributo: PIB)\n");
    printf("Carta1 - :%s          PIB:%.2f                       \n",cidade1, pib1);
    printf("Carta2 - :%s          PIB:%.2f                       \n",cidade2, pib2);
    if(pib1 > pib2){
        printf("Carta1   :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }
   
    printf("\nComparação de Cartas, (Atributo: Pontos Turisticos)\n");
    printf("Carta1 - :%s          Pontos Turisticos:%d                        \n",cidade1, turistico1);
    printf("Carta2 - :%s          Pontos Turisticos:%d                        \n",cidade2, turistico2);
    if(turistico1 > turistico2){
        printf("Carta1   :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }

    printf("\nComparação de Cartas, menor vence (Atributo: Densidade Populacional)\n");
    printf("Carta1 - :%s          Densidade Populacional:%.2f                       \n",cidade1, densid_1);
    printf("Carta2 - :%s          Densidade Populacional:%.2f                       \n",cidade2, densid_2);
    if(densid_1 < densid_2){
        printf("Carta1   :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }

    printf("\nComparação de Cartas, (Atributo: Pib Per capta)\n");
    printf("Carta1 - :%s          Pib Per Capta:%.2f                       \n",cidade1, pib_capt1);
    printf("Carta2 - :%s          Pib Per Capta:%.2f                       \n",cidade2, pib_capt2);
    if(pib_capt1 > pib_capt2){
        printf("Carta1   :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }

    printf("\nComparação de Cartas, (Atributo: Super Poder)\n");
    printf("Carta1 - :%s          Super Poder:%.2f                       \n",cidade1, superpoder1);
    printf("Carta2 - :%s          Super Poder:%.2f                       \n",cidade2, superpoder2);
    if(superpoder1 > superpoder2){
        printf("Carta1   :%s VENCEU!\n",cidade1);
    }else{
        printf("Carta2   :%s VENCEU!\n",cidade2);
    }
    */
    return 0;
}