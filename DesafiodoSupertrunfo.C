#include <stdio.h>

int main(){

        //Nessa primeira etapa, optei por criar todas as variaveis que irei usar no inicio do jogo. 

        float populacao1, populacao2, populacao3, populacao4, area1, area2, area3, area4, pib1, pib2, pib3, pib4, populacao01, populacao02, populacao03, populacao04, area01, area02, area03, area04, pib01, pib02, pib03, pib04, populacao001, populacao002, populacao003, populacao004, area001, area002, area003, area004, pib001, pib002, pib003, pib004, populacao0001, populacao0002, populacao0003, populacao0004, area0001, area0002, area0003, area0004, pib0001, pib0002, pib0003, pib0004, populacao00001, populacao00002, populacao00003, populacao00004, area00001, area00002, area00003, area00004, pib00001, pib00002, pib00003, pib00004, populacao000001, populacao000002, populacao000003, populacao000004, area000001, area000002, area000003, area000004, pib000001, pib000002, pib000003, pib000004, populacao0000001, populacao0000002, populacao0000003, populacao0000004, area0000001, area0000002, area0000003, area0000004,pib0000001, pib0000002, pib0000003, pib0000004, populacao00000001, populacao00000002, populacao00000003, populacao00000004, area00000001, area00000002, area00000003, area00000004, pib00000001, pib00000002, pib00000003, pib00000004;
        char quilometros [10] = "Km", dinheiro [10] = "R$";
        int pontoturistico1, pontoturistico2, pontoturistico3, pontoturistico4, pontoturistico01, pontoturistico02, pontoturistico03, pontoturistico04, pontoturistico001, pontoturistico002, pontoturistico003, pontoturistico004,pontoturistico0001, pontoturistico0002, pontoturistico0003, pontoturistico0004,pontoturistico00001, pontoturistico00002, pontoturistico00003, pontoturistico00004,pontoturistico000001, pontoturistico000002, pontoturistico000003, pontoturistico000004,pontoturistico0000001, pontoturistico0000002, pontoturistico0000003, pontoturistico0000004, pontoturistico00000001, pontoturistico00000002, pontoturistico00000003, pontoturistico00000004;

    

        //Como se trata de um jogo interativo, optei por colocar algumas das informações que me foram passadas como um guia para o proprio jogador, que são essas a baixo. 

        printf("No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar o mais forte. O tema do jogo é Pais\n");
        printf("Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02). levando isto em consideração responda as perguntas a baixo no que diz respeito ao estado A da cidade A01. \n ");

        // Abaixo optei por perguntar todos os valores referentes ao Estado "A" de uma só vez.

        printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.
        printf("Numero da população\n");
        scanf( " %f", &populacao1);
    
        printf("Area da cidade\n");
        scanf( " %f", &area1);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib1);

        printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico1);
        printf("\n");
        //
        printf("No que diz respeito ao estado A sobre a cidade A02, responda:\n");
        //
        printf("Numero da população\n");
        scanf( " %f", &populacao2);
    
        printf("Area da cidade\n");
        scanf( " %f", &area2);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib2);

        printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico2);
        printf("\n");
        //
        printf("No que diz respeito ao estado A sobre a cidade A03, responda:\n");
        //
        printf("Numero da população\n");
        scanf( " %f", &populacao3);
    
        printf("Area da cidade\n");
        scanf( " %f", &area3);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib3);
    
        printf("Numero de pontos \n");
        scanf( " %i", &pontoturistico3);
        printf("\n");
        //
        printf("No que diz respeito ao estado A sobre a cidade A04, responda:\n");
        //
        printf("Numero da população\n");
        scanf( " %f", &populacao4);
    
        printf("Area da cidade\n");
        scanf( " %f", &area4);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib4);
    
        printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico4);
        printf("\n"); 
        //Abaixo trouxe os valores fornecidos pelo jogador de cada cidade do Estado A. 

        printf(" Dados da cidade: A01\n");
        printf("Numero da população: %f\n", populacao1 );
        printf("Area da cidade: %f %s \n", area1,quilometros );
        printf("PIB: %f %s\n", pib1,dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico1 );
        
        printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade. 

        printf(" Dados da cidade: A02\n");
        printf("Numero da população: %f\n", populacao2 );
        printf("Area da cidade: %f %s \n", area2,quilometros );
        printf("PIB: %f %s\n", pib2,dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico2);

        printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade. 

        printf(" Dados da cidade: A03\n");
        printf("Numero da população: %f\n", populacao3 );
        printf("Area da cidade: %f %s \n", area3,quilometros );
        printf("PIB: %f %s\n", pib3,dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico3);

        printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade. 

        printf(" Dados da cidade: A04\n");
        printf("Numero da população: %f\n", populacao4);
        printf("Area da cidade: %f %s \n", area4,quilometros );
        printf("PIB: %f %s\n", pib4,dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico4);

        printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade. :) 

        printf("As informações do estado A foram concluidas com sucesso! \n");
        printf("No que diz respeito ao estado B sobre a cidade B01, responda:\n");
        printf("\n");
        printf("Numero da população\n");
        scanf( " %f", &populacao01);
    
        printf("Area da cidade\n");
        scanf( " %f", &area01);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib01);
        
        printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico01);
        printf("\n");
        //
        printf("No que diz respeito ao estado B sobre a cidade B02, responda:\n");
        //
        printf("Numero da população\n");
        scanf( " %f", &populacao02);
    
        printf("Area da cidade\n");
        scanf( " %f", &area02);
    
        printf("PIB da cidade\n");
        scanf( " %f", &pib02);
    
      printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico02);
        printf("\n");
        //
        printf("No que diz respeito ao estado B sobre a cidade B03, responda:\n");
        //
        printf("Numero da população\n");
        scanf( " %f", &populacao03);
    
        printf("Area da cidade\n");
        scanf( " %f", &area03);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib03);
    
        printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico03);
        printf("\n");
        //
        printf("No que diz respeito ao estado B sobre a cidade B04, responda:\n");
        //
        printf("Numero da população\n");
        scanf( " %f", &populacao04);
    
        printf("Area da cidade\n");
        scanf( " %f", &area04);
    
        printf( "PIB da cidade\n");
        scanf( " %f", &pib04);
    
        printf("Numero de pontos turisticos\n");
        scanf( " %i", &pontoturistico04);
        printf("\n");
        //
        printf(" Dados da cidade: B01\n");
        printf("Numero da população: %f\n", populacao01 );
        printf("Area da cidade: %f %s \n", area01, quilometros);
        printf("PIB: %f %s \n", pib01, dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico01 );
        printf("\n");
        //
        printf(" Dados da cidade: B02\n");
        printf("Numero da população: %f\n", populacao02 );
        printf("Area da cidade: %f %s \n", area02, quilometros);
        printf("PIB: %f %s \n", pib02, dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico02 );
        printf("\n");
    
        printf(" Dados da cidade: B03\n");
        printf("Numero da população: %f\n", populacao03 );
        printf("Area da cidade: %f %s \n", area03, quilometros);
        printf("PIB: %f %s \n", pib03, dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico03 );
        printf("\n");
    

        printf(" Dados da cidade: B04\n");
        printf("Numero da população: %f\n", populacao04 );
        printf("Area da cidade: %f %s \n", area04, quilometros);
        printf("PIB: %f %s \n", pib04, dinheiro);
        printf("Numero de pontos turisticos: %i\n", pontoturistico04 );
        printf("\n");
     
     printf("As informações do estado B foram conclidas com sucesso! \n");
     printf("No que diz respeito ao estado C sobre a cidade C01, responda:\n");
     printf("\n");
     printf("Numero da população\n");
     scanf( " %f", &populacao001);
 
     printf("Area da cidade\n");
     scanf( " %f", &area001);
 
     printf(" PIB da cidade\n");
     scanf( " %f", &pib001);
     
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico001);
     printf("\n");
     //
     printf("No que diz respeito ao estado C sobre a cidade C02, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao002);
 
     printf("Area da cidade\n");
     scanf( " %f", &area002);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib002);
 
   printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico002);
     printf("\n");
     //
     printf("No que diz respeito ao estado C sobre a cidade C03, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao003);
 
     printf("Area da cidade\n");
     scanf( " %f", &area003);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib003);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico003);
     printf("\n");
     //
     printf("No que diz respeito ao estado C sobre a cidade C04, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao004);
 
     printf("Area da cidade\n");
     scanf( " %f", &area004);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib004);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico004);
     printf("\n");
     //
     printf(" Dados da cidade: C01\n");
     printf("Numero da população: %f\n", populacao001 );
     printf("Area da cidade: %f %s \n", area001, quilometros);
     printf("PIB: %f %s \n", pib001, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico001 );
     printf("\n");
     //
     printf(" Dados da cidade: C02\n");
     printf("Numero da população: %f\n", populacao002 );
     printf("Area da cidade: %f %s \n", area002, quilometros);
     printf("PIB: %f %s \n", pib002, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico002 );
     printf("\n");
     //
     printf(" Dados da cidade: C03\n");
     printf("Numero da população: %f\n", populacao003 );
     printf("Area da cidade: %f %s \n", area003, quilometros);
     printf("PIB: %f %s \n", pib003, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico003 );
     printf("\n");
     //
     printf(" Dados da cidade: C04\n");
     printf("Numero da população: %f\n", populacao004 );
     printf("Area da cidade: %f %s \n", area004, quilometros);
     printf("PIB: %f %s \n", pib004, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico004 );
     printf("\n");
     //
     printf("As informações do estado C foram conclidas com sucesso! \n");
     printf("No que diz respeito ao estado D sobre a cidade D01, responda:\n");
     printf("\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0001);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0001);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0001);
     
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0001);
     printf("\n");
     //
     printf("No que diz respeito ao estado D sobre a cidade D02, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0002);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0002);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0002);
 
   printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0002);
     printf("\n");
     //
     printf("No que diz respeito ao estado D sobre a cidade D03, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0003);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0003);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0003);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0003);
     printf("\n");
     //
     printf("No que diz respeito ao estado D sobre a cidade D04, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0004);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0004);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0004);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0004);
     printf("\n");
     //

     printf(" Dados da cidade: D01\n");
     printf("Numero da população: %f\n", populacao0001 );
     printf("Area da cidade: %f %s \n", area0001, quilometros);
     printf("PIB: %f %s \n", pib0001, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0001 );
     printf("\n");
     //
     printf(" Dados da cidade: D02\n");
     printf("Numero da população: %f\n", populacao0002 );
     printf("Area da cidade: %f %s \n", area0002, quilometros);
     printf("PIB: %f %s \n", pib0002, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0002 );
     printf("\n");
     //
     printf(" Dados da cidade: D03\n");
     printf("Numero da população: %f\n", populacao0003 );
     printf("Area da cidade: %f %s \n", area0003, quilometros);
     printf("PIB: %f %s \n", pib0003, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0003 );
     printf("\n");
     //
     printf(" Dados da cidade: D04\n");
     printf("Numero da população: %f\n", populacao0004 );
     printf("Area da cidade: %f %s \n", area0004, quilometros);
     printf("PIB: %f %s \n", pib0004, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0004 );
     printf("\n");
     //
     printf("As informações do estado D foram conclidas com sucesso! \n");
     printf("No que diz respeito ao estado E sobre a cidade E01, responda:\n");
     printf("\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00001);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00001);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00001);
     
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00001);
     printf("\n");
     //
     printf("No que diz respeito ao estado E sobre a cidade E02, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00002);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00002);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00002);
 
   printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00002);
     printf("\n");
     //
     printf("No que diz respeito ao estado E sobre a cidade E03, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00003);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00003);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00003);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00003);
     printf("\n");
     //
     printf("No que diz respeito ao estado E sobre a cidade E04, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00004);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00004);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00004);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00004);
     printf("\n");
     //

     printf(" Dados da cidade: E01\n");
     printf("Numero da população: %f\n", populacao00001 );
     printf("Area da cidade: %f %s \n", area00001, quilometros);
     printf("PIB: %f %s \n", pib00001, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00001 );
     printf("\n");
     //
     printf(" Dados da cidade: E02\n");
     printf("Numero da população: %f\n", populacao00002 );
     printf("Area da cidade: %f %s \n", area00002, quilometros);
     printf("PIB: %f %s \n", pib00002, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00002 );
     printf("\n");
     //
     printf(" Dados da cidade: E03\n");
     printf("Numero da população: %f\n", populacao00003 );
     printf("Area da cidade: %f %s \n", area00003, quilometros);
     printf("PIB: %f %s \n", pib00003, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00003 );
     printf("\n");
     //
     printf(" Dados da cidade: E04\n");
     printf("Numero da população: %f\n", populacao00004 );
     printf("Area da cidade: %f %s \n", area00004, quilometros);
     printf("PIB: %f %s \n", pib00004, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00004 );
     printf("\n");
     //
     printf("As informações do estado E foram concluidas com sucesso! \n");
     printf("No que diz respeito ao estado F sobre a cidade f01, responda:\n");
     printf("\n");
     //

     printf("Numero da população\n");
     scanf( " %f", &populacao000001);
 
     printf("Area da cidade\n");
     scanf( " %f", &area000001);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib000001);
     
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico000001);
     printf("\n");
     //
     printf("No que diz respeito ao estado F sobre a cidade F02, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0000002);
 
     printf("Area da cidade\n");
     scanf( " %f", &area000002);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib000002);
 
   printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico000002);
     printf("\n");
     //
     printf("No que diz respeito ao estado F sobre a cidade F03, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao000003);
 
     printf("Area da cidade\n");
     scanf( " %f", &area000003);
 
     printf( "PIB da cidade \n");
     scanf( " %f", &pib000003);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico000003);
     printf("\n");
     //
     printf("No que diz respeito ao estado F sobre a cidade F04, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao000004);
 
     printf("Area da cidade\n");
     scanf( " %f", &area000004);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib000004);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico000004);
     printf("\n");
     //

     printf(" Dados da cidade: F01\n");
     printf("Numero da população: %f\n", populacao000001 );
     printf("Area da cidade: %f %s \n", area000001, quilometros);
     printf("PIB: %f %s \n", pib000001, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico000001 );
     printf("\n");
     //
     printf(" Dados da cidade: F02\n");
     printf("Numero da população: %f\n", populacao000002 );
     printf("Area da cidade: %f %s \n", area000002, quilometros);
     printf("PIB: %f %s \n", pib000002, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico000002 );
     printf("\n");
     //
     printf(" Dados da cidade: F03\n");
     printf("Numero da população: %f\n", populacao000003 );
     printf("Area da cidade: %f %s \n", area000003, quilometros);
     printf("PIB: %f %s \n", pib000003, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico000003 );
     printf("\n");
     //
     printf(" Dados da cidade: F04\n");
     printf("Numero da população: %f\n", populacao000004 );
     printf("Area da cidade: %f %s \n", area000004, quilometros);
     printf("PIB: %f %s \n", pib000004, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico000004 );
     printf("\n");
     //
     printf("As informações do estado F foram conclidas com sucesso! \n");
     printf("No que diz respeito ao estado G sobre a cidade G01, responda:\n");
     printf("\n");
     //

     printf("Numero da população\n");
     scanf( " %f", &populacao0000001);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0000001);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0000001);
     
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0000001);
     printf("\n");
     //
     printf("No que diz respeito ao estado G sobre a cidade G02, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0000002);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0000002);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0000002);
 
   printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0000002);
     printf("\n");
     //
     printf("No que diz respeito ao estado G sobre a cidade G03, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0000003);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0000003);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0000003);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0000003);
     printf("\n");
     //
     printf("No que diz respeito ao estado G sobre a cidade G04, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao0000004);
 
     printf("Area da cidade\n");
     scanf( " %f", &area0000004);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib0000004);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico0000004);
     printf("\n");
     //

     printf(" Dados da cidade: G01\n");
     printf("Numero da população: %f\n", populacao0000001 );
     printf("Area da cidade: %f %s \n", area0000001, quilometros);
     printf("PIB: %f %s \n", pib0000001, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0000001 );
     printf("\n");
     //
     printf(" Dados da cidade: G02\n");
     printf("Numero da população: %f\n", populacao0000002 );
     printf("Area da cidade: %f %s \n", area0000002, quilometros);
     printf("PIB: %f %s \n", pib0000002, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0000002 );
     printf("\n");
     //
     printf(" Dados da cidade: G03\n");
     printf("Numero da população: %f\n", populacao0000003 );
     printf("Area da cidade: %f %s \n", area0000003, quilometros);
     printf("PIB: %f %s \n", pib0000003, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0000003 );
     printf("\n");
     //
     printf(" Dados da cidade: G04\n");
     printf("Numero da população: %f\n", populacao0000004 );
     printf("Area da cidade: %f %s \n", area0000004, quilometros);
     printf("PIB: %f %s \n", pib0000004, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico0000004 );
     printf("\n");
     //
     printf("As informações do estado G foram conclidas com sucesso! \n");
     printf("No que diz respeito ao estado H sobre a cidade H01, responda:\n");
     printf("\n");
     //

     printf("Numero da população\n");
     scanf( " %f", &populacao00000001);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00000001);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00000001);
     
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00000001);
     printf("\n");
     //
     printf("No que diz respeito ao estado H sobre a cidade H02, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00000002);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00000002);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00000002);
 
   printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00000002);
     printf("\n");
     //
     printf("No que diz respeito ao estado H sobre a cidade H03, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00000003);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00000003);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00000003);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00000003);
     printf("\n");
     //
     printf("No que diz respeito ao estado H sobre a cidade H04, responda:\n");
     //
     printf("Numero da população\n");
     scanf( " %f", &populacao00000004);
 
     printf("Area da cidade\n");
     scanf( " %f", &area00000004);
 
     printf( "PIB da cidade\n");
     scanf( " %f", &pib00000004);
 
     printf("Numero de pontos turisticos\n");
     scanf( " %i", &pontoturistico00000004);
     printf("\n");
     //

     printf(" Dados da cidade: G01\n");
     printf("Numero da população: %f\n", populacao00000001 );
     printf("Area da cidade: %f %s \n", area00000001, quilometros);
     printf("PIB: %f %s \n", pib00000001, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00000001 );
     printf("\n");
     //
     printf(" Dados da cidade: G02\n");
     printf("Numero da população: %f\n", populacao00000002 );
     printf("Area da cidade: %f %s \n", area00000002, quilometros);
     printf("PIB: %f %s \n", pib00000002, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00000002 );
     printf("\n");
     //
     printf(" Dados da cidade: G03\n");
     printf("Numero da população: %f\n", populacao00000003 );
     printf("Area da cidade: %f %s \n", area00000003, quilometros);
     printf("PIB: %f %s \n", pib00000003, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00000003 );
     printf("\n");
     //
     printf(" Dados da cidade: G04\n");
     printf("Numero da população: %f\n", populacao00000004 );
     printf("Area da cidade: %f %s \n", area00000004, quilometros);
     printf("PIB: %f %s \n", pib00000004, dinheiro);
     printf("Numero de pontos turisticos: %i\n", pontoturistico00000004 );
     printf("\n");
     //
     printf("Conclusão das propriedades das cartas concluidas.\n");

     //Fim do desafio "NOVATO" :P 
     //-------------------------------------------------------------------------//
     
     //DESAFIO AVENTUREIRO

    // Optei por criar todas as variáveis que irei usar nessa nova etapa de uma só vez
    float dencidadepopulacional1, dencidadepopulacional2, dencidadepopulacinal3, densidadepopulacional4;
    float dencidadepopulacional01, dencidadepopulacional02, dencidadepopulacinal03, densidadepopulacional04;
    float dencidadepopulacional001, dencidadepopulacional002, dencidadepopulacinal003, densidadepopulacional004;
    float dencidadepopulacional0001, dencidadepopulacional0002, dencidadepopulacinal0003, densidadepopulacional0004;
    float dencidadepopulacional00001, dencidadepopulacional00002, dencidadepopulacinal00003, densidadepopulacional00004;
    float dencidadepopulacional000001, dencidadepopulacional000002, dencidadepopulacinal000003, densidadepopulacional000004;
    float dencidadepopulacional0000001, dencidadepopulacional0000002, dencidadepopulacinal0000003, densidadepopulacional0000004;
    float dencidadepopulacional00000001, dencidadepopulacional00000002, dencidadepopulacinal00000003, densidadepopulacional00000004;
    float capita1, capita2, capita3, capita4, capita01, capita02, capita03, capita04, capita001, capita002, capita003, capita004,capita0001, capita0002, capita0003, capita0004,capita00001, capita00002, capita00003, capita00004, capita000001, capita000002, capita000003, capita000004,capita0000001, capita0000002, capita0000003, capita0000004,capita00000001, capita00000002, capita00000003, capita00000004;
   
    // Abaixo começo a dar as instruções para que o computador ache os valores do PIB per capita das cidades de todos os estados. 

    capita1 = (float) pib1 / populacao1,  capita2 = (float) pib2 / populacao2,  capita3 = (float) pib3 / populacao3,  capita4 = (float) pib4 / populacao4;
    capita01 = (float) pib01 / populacao01,  capita02 = (float) pib02 / populacao02,  capita03 = (float) pib03 / populacao03,  capita04 = (float) pib04 / populacao04;
    capita001 = (float) pib001 / populacao001,  capita002 = (float) pib002 / populacao002,  capita003 = (float) pib003 / populacao003,  capita004 = (float) pib004 / populacao004;
    capita0001 = (float) pib0001 / populacao0001,  capita0002 = (float) pib0002 / populacao0002,  capita0003 = (float) pib0003 / populacao0003,  capita0004 = (float) pib0004 / populacao0004;
    capita00001 = (float) pib00001 / populacao00001,  capita00002 = (float) pib00002 / populacao00002,  capita00003 = (float) pib00003 / populacao00003,  capita00004 = (float) pib00004 / populacao00004;
    capita000001 = (float) pib000001 / populacao000001,  capita000002 = (float) pib000002 / populacao000002,  capita000003 = (float) pib000003 / populacao000003,  capita000004 = (float) pib000004 / populacao000004;
    capita0000001 = (float) pib0000001 / populacao0000001,  capita0000002 = (float) pib0000002 / populacao0000002,  capita0000003 = (float) pib0000003 / populacao0000003,  capita0000004 = (float) pib0000004 / populacao0000004;
    capita00000001 = (float) pib00000001 / populacao00000001,  capita00000002 = (float) pib00000002 / populacao00000002,  capita00000003 = (float) pib00000003 / populacao00000003,  capita00000004 = (float) pib00000004 / populacao00000004;
   
    // A baixo estão as instruções para que os computador ache o valor da densidade populacional.

    dencidadepopulacional1= (float) populacao1 / area1, dencidadepopulacional2= (float) populacao2 / area2, dencidadepopulacinal3= (float) populacao3 / area3, densidadepopulacional4= (float) populacao4 / area4;
    dencidadepopulacional01= (float) populacao01 / area01, dencidadepopulacional02= (float) populacao02 / area02, dencidadepopulacinal03= (float) populacao03 / area03, densidadepopulacional04= (float) populacao04 / area04;
    dencidadepopulacional001= (float) populacao001 / area001, dencidadepopulacional002= (float) populacao002 / area002, dencidadepopulacinal003= (float) populacao003 / area003, densidadepopulacional004= (float) populacao004 / area004;
    dencidadepopulacional0001= (float) populacao0001 / area0001, dencidadepopulacional0002= (float) populacao0002 / area0002, dencidadepopulacinal0003= (float) populacao0003 / area0003, densidadepopulacional0004= (float) populacao0004 / area0004;
    dencidadepopulacional00001 = (float) populacao00001 / area00001, dencidadepopulacional00002= (float) populacao00002 / area00002, dencidadepopulacinal00003= (float) populacao00003 / area00003, densidadepopulacional00004= (float) populacao00004 / area00004;
    dencidadepopulacional000001 = (float) populacao000001 / area000001, dencidadepopulacional000002= (float) populacao000002 / area000002, dencidadepopulacinal000003= (float) populacao000003 / area000003, densidadepopulacional000004= (float) populacao000004 / area000004;
    dencidadepopulacional0000001 = (float) populacao0000001 / area0000001, dencidadepopulacional0000002= (float) populacao0000002 / area0000002, dencidadepopulacinal0000003= (float) populacao0000003 / area0000003, densidadepopulacional0000004= (float) populacao0000004 / area0000004;
    dencidadepopulacional00000001 = (float) populacao00000001 / area00000001, dencidadepopulacional00000002= (float) populacao00000002 / area00000002, dencidadepopulacinal00000003= (float) populacao00000003 / area00000003, densidadepopulacional00000004= (float) populacao00000004 / area00000004;


 printf("\n");
 printf("Expandindo sistema para adicionar propriedades calculadas \n");
 printf("\n");

 printf(" Dados da cidade: A01\n");
 printf("Numero da população: %.6f\n", populacao1 );
 printf("Area da cidade: %.6f %s \n", area1,quilometros );
 printf("PIB: %.6f %s\n", pib1,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico1 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional1);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita1,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: A02\n");
 printf("Numero da população: %.6f\n", populacao2 );
 printf("Area da cidade: %.6f %s \n", area2,quilometros );
 printf("PIB: %.6f %s\n", pib2,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico2 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional2);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita2,dinheiro);
 printf("\n");

 printf(" Dados da cidade: A03\n");
 printf("Numero da população: %.6f\n", populacao3 );
 printf("Area da cidade: %.6f %s \n", area3,quilometros );
 printf("PIB: %.6f %s\n", pib3,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico3 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal3);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita3,dinheiro);
 printf("\n");

 printf(" Dados da cidade: A04\n");
 printf("Numero da população: %.6f\n", populacao4 );
 printf("Area da cidade: %.6f %s \n", area4,quilometros );
 printf("PIB: %.6f %s\n", pib4,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico4 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional4);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita4,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: B01\n");
 printf("Numero da população: %.6f\n", populacao01 );
 printf("Area da cidade: %.6f %s \n", area01,quilometros );
 printf("PIB: %.6f %s\n", pib01,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico01 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional01);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita01,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: B02\n");
 printf("Numero da população: %.6f\n", populacao02 );
 printf("Area da cidade: %.6f %s \n", area02,quilometros );
 printf("PIB: %.6f %s\n", pib02,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico02 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional02);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita02,dinheiro);
 printf("\n");

 printf(" Dados da cidade: B03\n");
 printf("Numero da população: %.6f\n", populacao03 );
 printf("Area da cidade: %.6f %s \n", area03,quilometros );
 printf("PIB: %.6f %s\n", pib03,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico03 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal03);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita03,dinheiro);
 printf("\n");

 printf(" Dados da cidade: B04\n");
 printf("Numero da população: %.6f\n", populacao04 );
 printf("Area da cidade: %.6f %s \n", area04,quilometros );
 printf("PIB: %.6f %s\n", pib04,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico04 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional04);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita04,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: C01\n");
 printf("Numero da população: %.6f\n", populacao001 );
 printf("Area da cidade: %.6f %s \n", area001,quilometros );
 printf("PIB: %.6f %s\n", pib001,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico001 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional001);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita001,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: C02\n");
 printf("Numero da população: %.6f\n", populacao002 );
 printf("Area da cidade: %.6f %s \n", area002,quilometros );
 printf("PIB: %.6f %s\n", pib002,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico002 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional002);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita002,dinheiro);
 printf("\n");

 printf(" Dados da cidade: C03\n");
 printf("Numero da população: %.6f\n", populacao003 );
 printf("Area da cidade: %.6f %s \n", area003,quilometros );
 printf("PIB: %.6f %s\n", pib003,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico003 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal003);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita003,dinheiro);
 printf("\n");

 printf(" Dados da cidade: C04\n");
 printf("Numero da população: %.6f\n", populacao004 );
 printf("Area da cidade: %.6f %s \n", area004,quilometros );
 printf("PIB: %.6f %s\n", pib004,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico004 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional004);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita004,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: D01\n");
 printf("Numero da população: %.6f\n", populacao0001 );
 printf("Area da cidade: %.6f %s \n", area0001,quilometros );
 printf("PIB: %.6f %s\n", pib0001,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0001 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional0001);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0001,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: D02\n");
 printf("Numero da população: %.6f\n", populacao0002 );
 printf("Area da cidade: %.6f %s \n", area0002,quilometros );
 printf("PIB: %.6f %s\n", pib0002,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0002 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional0002);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0002,dinheiro);
 printf("\n");

 printf(" Dados da cidade: D03\n");
 printf("Numero da população: %.6f\n", populacao0003 );
 printf("Area da cidade: %.6f %s \n", area0003,quilometros );
 printf("PIB: %.6f %s\n", pib0003,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0003 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal0003);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0003,dinheiro);
 printf("\n");

 printf(" Dados da cidade: D04\n");
 printf("Numero da população: %.6f\n", populacao0004 );
 printf("Area da cidade: %.6f %s \n", area0004,quilometros );
 printf("PIB: %.6f %s\n", pib0004,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0004 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional0004);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0004,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: E01\n");
 printf("Numero da população: %.6f\n", populacao00001 );
 printf("Area da cidade: %.6f %s \n", area00001,quilometros );
 printf("PIB: %.6f %s\n", pib00001,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00001 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional00001);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00001,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: E02\n");
 printf("Numero da população: %.6f\n", populacao00002 );
 printf("Area da cidade: %.6f %s \n", area00002,quilometros );
 printf("PIB: %.6f %s\n", pib00002,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00002 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional00002);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00002,dinheiro);
 printf("\n");

 printf(" Dados da cidade: E03\n");
 printf("Numero da população: %.6f\n", populacao00003 );
 printf("Area da cidade: %.6f %s \n", area00003,quilometros );
 printf("PIB: %.6f %s\n", pib00003,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00003 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal00003);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00003,dinheiro);
 printf("\n");

 printf(" Dados da cidade: E04\n");
 printf("Numero da população: %.6f\n", populacao00004 );
 printf("Area da cidade: %.6f %s \n", area00004,quilometros );
 printf("PIB: %.6f %s\n", pib00004,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00004 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional00004);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00004,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: F01\n");
 printf("Numero da população: %.6f\n", populacao000001 );
 printf("Area da cidade: %.6f %s \n", area000001,quilometros );
 printf("PIB: %.6f %s\n", pib000001,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico000001 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional000001);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita000001,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: F02\n");
 printf("Numero da população: %.6f\n", populacao000002 );
 printf("Area da cidade: %.6f %s \n", area000002,quilometros );
 printf("PIB: %.6f %s\n", pib000002,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico000002 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional000002);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00002,dinheiro);
 printf("\n");

 printf(" Dados da cidade: F03\n");
 printf("Numero da população: %.6f\n", populacao000003 );
 printf("Area da cidade: %.6f %s \n", area000003,quilometros );
 printf("PIB: %.6f %s\n", pib000003,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico000003 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal000003);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita000003,dinheiro);
 printf("\n");

 printf(" Dados da cidade: F04\n");
 printf("Numero da população: %.6f\n", populacao000004 );
 printf("Area da cidade: %.6f %s \n", area000004,quilometros );
 printf("PIB: %.6f %s\n", pib000004,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico000004 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional000004);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita000004,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: G01\n");
 printf("Numero da população: %.6f\n", populacao0000001 );
 printf("Area da cidade: %.6f %s \n", area0000001,quilometros );
 printf("PIB: %.6f %s\n", pib0000001,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0000001 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional0000001);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0000001,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: G02\n");
 printf("Numero da população: %.6f\n", populacao0000002 );
 printf("Area da cidade: %.6f %s \n", area0000002,quilometros );
 printf("PIB: %.6f %s\n", pib0000002,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0000002 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional0000002);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0000002,dinheiro);
 printf("\n");

 printf(" Dados da cidade: G03\n");
 printf("Numero da população: %.6f\n", populacao0000003 );
 printf("Area da cidade: %.6f %s \n", area0000003,quilometros );
 printf("PIB: %.6f %s\n", pib0000003,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0000003 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal0000003);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0000003,dinheiro);
 printf("\n");

 printf(" Dados da cidade: G04\n");
 printf("Numero da população: %.6f\n", populacao0000004 );
 printf("Area da cidade: %.6f %s \n", area0000004,quilometros );
 printf("PIB: %.6f %s\n", pib0000004,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico0000004 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional0000004);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita0000004,dinheiro);
 printf("\n");

//--------------------------------------------------------------------------------------------//

 printf(" Dados da cidade: H01\n");
 printf("Numero da população: %.6f\n", populacao00000001 );
 printf("Area da cidade: %.6f %s \n", area00000001,quilometros );
 printf("PIB: %.6f %s\n", pib00000001,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00000001 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional00000001);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00000001,dinheiro);
 printf("\n"); // Só para deixar algo mais legal pro jogador ler as informações da cidade.

 printf(" Dados da cidade: H02\n");
 printf("Numero da população: %.6f\n", populacao00000002 );
 printf("Area da cidade: %.6f %s \n", area00000002,quilometros );
 printf("PIB: %.6f %s\n", pib00000002,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00000002 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacional00000002);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00000002,dinheiro);
 printf("\n");

 printf(" Dados da cidade: H03\n");
 printf("Numero da população: %.6f\n", populacao00000003 );
 printf("Area da cidade: %.6f %s \n", area00000003,quilometros );
 printf("PIB: %.6f %s\n", pib00000003,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00000003 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", dencidadepopulacinal00000003);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00000003,dinheiro);
 printf("\n");

 printf(" Dados da cidade: H04\n");
 printf("Numero da população: %.6f\n", populacao00000004 );
 printf("Area da cidade: %.6f %s \n", area00000004,quilometros );
 printf("PIB: %.6f %s\n", pib00000004,dinheiro);
 printf("Numero de pontos turisticos: %i\n", pontoturistico00000004 );
 printf("Dencidade populacional: %.6F por quilometros quadrado\n", densidadepopulacional00000004);
 printf(" PIB Percapita %.3F %s por pessoa\n", capita00000004,dinheiro);
 printf("\n");



}