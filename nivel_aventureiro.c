#include <stdio.h>

    // Desafio Super Trunfo em C.
    // Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    // Programa Elaborado por Joao Victor
    // Desafio Nível Aventureiro

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
   
    //Calculando variáveis carta 2

    densid_2 = (float) (populacao2 / area2); 
    
    
     
    // MENU PRINCIPAL PARA ESCOLHA DO ITEM A SER COMPARADO
    printf("***Escolha um atribuito para comparação***\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade demográfica\nEscolha=> ");
    scanf ("%d", &escolha_atributo);

    switch (escolha_atributo)
    {
    case 1: //COMPARANDO POPULACAO
        if(populacao1 == populacao2) 
        {
                printf("COMPARANDO POPULAÇÃO");
                printf("*** EMPATE! ***\n");
                printf("Carta1 - :%s    População:%lu\n", pais1, populacao1);
                printf("Carta2 - :%s População:%lu\n", pais2, populacao2);
                }else if(populacao1 > populacao2)
                {
                    printf("COMPARANDO POPULAÇÃO");
                    printf("\nCarta1 - :%s ***VENCEU!***\n", pais1);
                    printf("Carta1 - :%s    População:%lu\n", pais1, populacao1);
                    printf("Carta2 - :%s População:%lu\n", pais2, populacao2);
                }else
                {
                    printf("COMPARANDO POPULAÇÃO");
                    printf("Carta2 - :%s ***VENCEU!***\n", pais2);
                    printf("Carta1 - :%s    População:%lu       \n", pais1, populacao1);
                    printf("Carta2 - :%s População:%lu       \n", pais2, populacao2);  
                }
                
        break;
                case 2: // COMPARANDO AREA
                if(area1 == area2)
                {
                    printf("COMPARANDO AREA");
                    printf("*** EMPATE! ***\n");
                    printf("Carta 1 -:%s    Area:%.2f\n", pais1,area1);
                    printf("Carta 2 -:%s Area:%.2f\n", pais2,area2);

                }else if(area1 > area2)
                {
                    printf("Carta 1 -:%s **VENCEU!***\n",pais1);
                    printf("Carta 1 -:%s    Area:%.2f\n", pais1,area1);
                    printf("Carta 2 -:%s Area:%.2f\n", pais2,area2);
                }else
                {   
                    printf("COMPARANDO AREA");
                    printf("Carta 2 -:%s ***VENCEU***\n",pais2);
                    printf("carta 1 -:%s   Area:%.2f\n", pais1,area1);
                    printf("Carta 2 -:%s Area:%.2f\n", pais2,area2);
                }
        break;
                case 3: // COMPARANDO PIB
                if(pib1 == pib2)
                {
                    printf("COMPARANDO PIB\n");
                    printf("***EMPATE!***");
                    printf("Carta 1 -:%s    PIB:%.2f\n", pais1,pib1);
                    printf("Carta 2 -:%s PIB:%.2f\n", pais2,pib2); 

                }else if(pib1 > pib2)
                {
                    printf("COMPARANDO PIB\n");
                    printf("Carta 1 -:%s **VENCEU!***\n",pais1);
                    printf("Carta 1 -:%s    PIB:%.2f\n", pais1,pib1);
                    printf("Carta 2 -:%s PIB:%.2f\n", pais2,pib2);    
                }else
                {
                    printf("COMPARANDO PIB\n");
                    printf("Carta 2 -:%s ***VENCEU***\n",pais2);
                    printf("carta 1 -:%s    PIB:%.2f\n", pais1,pib1);
                    printf("Carta 2 -:%s PIB:%.2f\n", pais2,pib2);   

                }
        break;
                case 4: //COMPARANDO PONTOS TURISTICOS
                if(turistico1 == turistico2)
                {
                    printf("COMPARANDO PONTOS TURISTICOS\n");
                    printf("***EMPATE!***");
                    printf("Carta 1 -:%s    PONTOS TURISTICOS:%d\n", pais1,turistico1);
                    printf("Carta 2 -:%s PONTOS TURISTICOS:%d\n", pais2,turistico2); 

                }else if(turistico1 > turistico2)
                {
                    printf("COMPARANDO PONTOS TURISTICOS\n");
                    printf("Carta 1 -:%s **VENCEU!***\n",pais1);
                    printf("Carta 1 -:%s    PONTOS TURISTICOS:%d\n", pais1,turistico1);
                    printf("Carta 2 -:%s PONTOS TURISTICOS:%d\n", pais2,turistico2);    
                }else
                {
                    printf("COMPARANDO PONTOS TURISTICOS\n");
                    printf("Carta 2 -:%s ***VENCEU***\n",pais2);
                    printf("carta 1 -:%s    PONTOS TURISTICOS:%d\n", pais1,turistico1);
                    printf("Carta 2 -:%s PONTOS TURISTICOS:%d\n", pais2,turistico2); 
                }    
        break;
              
        case 5: // COMPARANDO DENSIDADE DEMOGRAFICA
        if(densid_1 == densid_2)
        {
            printf("COMPARANDO DENSIDADE DEMOGRÁFICA\n");
            printf("***EMPATE!***");
            printf("Carta 1 -:%s    DENSIDADE DEMOGRÁFICA:%.2f\n", pais1,densid_1);
            printf("Carta 2 -:%s DENSIDADE DEMOGRÁFICA:%.2f\n", pais2,densid_2); 

        }else if(densid_1 < densid_2)
        {
            printf("COMPARANDO DENSIDADE DEMOGRÁFICA\n");
            printf("Carta 1 -:%s **VENCEU!***\n",pais1);
            printf("Carta 1 -:%s    DENSIDADE DEMOGRÁFICA:%.2f\n", pais1,densid_1);
            printf("Carta 2 -:%s DENDIDADE DEMOGRÁFICA:%.2f\n", pais2,densid_2);    
        }else
        {
            printf("COMPARANDO DENSIDADE DEMOGRÁFICA\n");
            printf("Carta 2 -:%s ***VENCEU***\n",pais2);
            printf("carta 1 -:%s    DENSIDADE DEMOGRÁFICA:%.2f\n", pais1,densid_1);
            printf("Carta 2 -:%s DENSIDADE DEMOGRÁFICA:%.2f\n", pais2,densid_2); 
        }    

    
    default: // ENTRADAS INVÁLIDAS
    {
    printf("Opcão inválida!\n");
        break;
    }
return 0;
    }

}