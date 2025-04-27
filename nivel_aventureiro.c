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

    char pais1[] ="Brasil", pais2[] ="Argentina";
    unsigned long int populacao1 = 212000000, populacao2 = 45054000;
    float area1 = 85157, area2 = 2780400; 
    float pib1 = 2174000000000, pib2 = 646100000000;
    float densid_1, densid_2, pib_capt1, pib_capt2, vs_densid, vs_pib_capt;
    int turistico1, turistico2, vs_turistico, escolha_atributo, comparativo;
        
    
    //Calculando variáveis carta 1 

    densid_1 = (float) (populacao1 / area1); 
    pib_capt1 = (float) (pib1 / populacao1);
   
    //Calculando variáveis carta 2

    densid_2 = (float) (populacao2 / area2); 
    pib_capt2 = (float) (pib2 / populacao2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /* 12  
    Carta1 exibição das informações em tela:

    printf("\nCarta 1:\n");    
    printf("Nome do Pais:%s\n", pais1);
    printf("População:%lu\n", populacao1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", turistico1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densid_1);
    printf("PIB per Capita: %.2f reais\n", pib_capt1);
      

    Carta2 exibição das informações em tela:

    printf("\nCarta 2:\n");    
    printf("Nome do Pais:\n", pais2);
    printf("População:%lu\n", populacao2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densid_2);
    printf("PIB per Capita: %.2f reais\n", pib_capt2);
    */
    
   
    printf("***Escolha um atribuito para comparação***\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade demográfica\nEscolha=> ");
    scanf ("%d", &escolha_atributo);

    switch (escolha_atributo)
    {
    case 1:
        if(populacao1 == populacao2)
        {
            printf("*** EMPATE! ***\n");
            printf("Carta1 - :%s              População:%lu       \n", pais1, populacao1);
            printf("Carta2 - :%s              População:%lu       \n", pais2, populacao2);
                }else if(populacao1 > populacao2)
                {
                    printf("\nCarta1 - :%s                  ***VENCEU!***                         \n", pais1);
                    printf("Carta1 - :%s                  População:%lu                         \n", pais1, populacao1);
                    printf("Carta2 - :%s               População:%lu                         \n", pais2, populacao2);
                }else
                {
                    printf("Carta2 - :%s              VENCEU!\n", pais2);
                    printf("Carta1 - :%s              População:%lu       \n", pais1, populacao1);
                    printf("Carta2 - :%s              População:%lu       \n", pais2, populacao2);  
                }
                
        break;
                case 2:
                if(area1 == area2)
                {
                    printf("*** EMPATE! ***\n");
                }else if(area1 > area2)
                {
                    printf("Carta 1 -:%s **VENCEU!***\n",pais1);
                    printf("Carta 1 -:%s          Area:%.2f\n", pais1,area1);
                    printf("Carta 2 -:%s          Area:%.2f\n", pais2,area2);
                }else
                {
                    printf("Carta 2 -:%s ***VENCEU***\n",pais2);
                    printf("carta 1 -:%s           Area:%.2f\n", pais1,area1);
                    printf("Carta 2 -:%s           Area:%.2f\n", pais2,area2);
                }
        break;
                case 3:
                if(pib1 == pib2)
                {
                    printf("***EMPATE!***");
                }else if(pib1 > pib2)
                {
                    printf("COMPARANDO PIB\n");
                    printf("Carta 1 -:%s **VENCEU!***\n",pais1);
                    printf("Carta 1 -:%s          PIB:%.2f\n", pais1,pib1);
                    printf("Carta 2 -:%s          PIB:%.2f\n", pais2,pib2);    
                }else
                {
                    printf("COMPARANDO PIB\n");
                    printf("Carta 2 -:%s ***VENCEU***\n",pais2);
                    printf("carta 1 -:%s           PIB:%.2f\n", pais1,pib1);
                    printf("Carta 2 -:%s           PIB:%.2f\n", pais2,pib2);   

                }
        break;
                case 4:
                if(turistico1 == turistico2)
                {
                    printf("***EMPATE!***");
                }else if(turistico1 > turistico2)
                {
                    printf("COMPARANDO PONTOS TURISTICOS\n");
                    printf("Carta 1 -:%s **VENCEU!***\n",pais1);
                    printf("Carta 1 -:%s          PONTOS TURISTICOS:%d\n", pais1,turistico1);
                    printf("Carta 2 -:%s          PONTOS TURISTICOS:%d\n", pais2,turistico2);    
                }else
                {
                    printf("COMPARANDO PONTOS TURISTICOS\n");
                    printf("Carta 2 -:%s ***VENCEU***\n",pais2);
                    printf("carta 1 -:%s           PIB:%d\n", pais1,turistico1);
                    printf("Carta 2 -:%s           PIB:%d\n", pais2,turistico2); 
                }    
                    break;

    
    default:
    {
    printf("Opcão inválida!\n");
        break;
    }
return 0;

}