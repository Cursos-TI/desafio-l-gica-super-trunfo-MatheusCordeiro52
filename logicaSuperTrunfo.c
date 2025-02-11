#include <stdio.h>

int main() {
   //variavel para o menu interativo
   int menuInterativo;

    //variaveis da carta1
   char Estado[50];
   char codigoCidade[3];
   char nomeCidade[50];
   long int populacao;
   float area;
   float pib;
   int pontoTuristico;
   float densidadePopulacional;
   float pibPerCapita;
   long int superPoder;

       //variaveis da carta2
   char Estado2[50];
   char codigoCidade2[3];
   char nomeCidade2[50];
   long int populacao2;
   float area2;
   float pib2;
   int pontoTuristico2;
   float densidadePopulacional2;
   float pibPerCapita2;
   long int superPoder2;
      //Menu principal para escolhas das opções
      printf("-= MENU PRINCIPAL =-.\n");
         printf("1. Iniciar jogo.\n");
         printf("2. Apresentação do jogo.\n");
         printf("3. Regras do Jogo.\n");
         printf("4. Sair.\n");
      printf("Escolha uma opção:\n");
      scanf("%d", &menuInterativo);

   switch (menuInterativo)
   {
   case 1:
          //Entrada de dados carta 1
            printf("-=DADOS DA PRIMEIRA CARTA=-\n");
         printf("Digite o estado: \n"); 
            scanf("%s", &Estado);
         printf("Digite o código da cidade de A a H com numeração de 01 a 04:\n");
            scanf( "%s", &codigoCidade);
         printf("Digite o nome da cidade:\n");
            scanf("%s", &nomeCidade);
         printf("Digite a população da cidade:\n");
            scanf("%d", &populacao);
         printf("Digite a área da cidade em KM²:\n");
            scanf("%f", &area);
         printf("Digite o PIB da cidade\n");
            scanf("%f", &pib);
         printf("Digite a quantidade de pontos turisticos da cidade:\n"); 
            scanf("%d", &pontoTuristico);
   printf("\n");
   
         //Calculo de densidade populacional carta 1
      densidadePopulacional = (populacao / area);
        //Calculo de PIB per capita carta 1
      pibPerCapita = (populacao / pib);
        //Calculo do Super Poder carta 1
      superPoder = (populacao + (int)area + (int)pib + pontoTuristico + (int)densidadePopulacional + (int)pibPerCapita);
   
             //Entrada de dados carta 2
            printf("-=DADOS DA SEGUNDA CARTA=-\n");
         printf("Digite um Estado: \n");
            scanf(" %s", &Estado2);
         printf("Digite o código da cidade de A a H com numeração de 01 a 04:\n");
            scanf("%s", &codigoCidade2);
         printf("Digite o nome da cidade:\n");
            scanf("%s", &nomeCidade2);
         printf("Digite a população da cidade:\n");
            scanf("%d", &populacao2);
         printf("Digite a área da cidade em KM²:\n");
            scanf("%f", &area2);
         printf("Digite o PIB da cidade\n");
            scanf("%f", &pib2);
         printf("Digite a quantidade de pontos turisticos da cidade:\n");
            scanf("%d", &pontoTuristico2);
   printf("\n");
        //Calculo de densidade populacional carta 2
      densidadePopulacional2 = (populacao2 / area2);
        //Calculo de PIB per capita carta 2
      pibPerCapita2 = (populacao2 / pib2);
        //Calculo do Super Poder carta 2
      superPoder2 = (populacao2 + (int)area2 + (int)pib2 + pontoTuristico2 + (int)densidadePopulacional2 + (int)pibPerCapita2);
   
   printf("\n");
        //saida com os dados e suas descrições carta 1
         printf("-=DADOS PRIMEIRA CARTA=-\n");
      printf("CÓDIGO DA CARTA: %s%s\n", Estado, codigoCidade);
      printf("NOME DA CIDADE: %s\n", nomeCidade);
      printf("POPULAÇÃO DA CIDADE: %d\n", populacao);
      printf("ÁREA DA CIDADE: %.2f KM²\n", area);
      printf("PIB DA CIDADE: %.2f BILHÕES \n", pib);
      printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico);
      printf("DENSIDADE POPULACIONAL: %.2f pessoas/km² \n", densidadePopulacional);
      printf("PIB per capita: %.2f reais \n", pibPerCapita);
      printf("SUPER PODER DA CARTA: %d\n", superPoder);
      
   printf("\n");    
            //saida com os dados e suas descrições 2
         printf("-=DADOS SEGUNDA CARTA=-\n");
   printf("\n");        
      printf("CÓDIGO DA CARTA: %s%s\n", Estado2, codigoCidade2);
      printf("NOME DA CIDADE: %s\n", nomeCidade2);
      printf("POPULAÇÃO DA CIDADE: %d\n", populacao2);
      printf("ÁREA DA CIDADE: %.2f KM²\n", area2);
      printf("PIB DA CIDADE: %.2f BILHÕES \n", pib2);
      printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico2);
      printf("DENSIDADE POPULACIONAL: %.2f pessoas/km² \n", densidadePopulacional2);
      printf("PIB per capita: %.2f reais \n", pibPerCapita2);
      printf("SUPER PODER DA CARTA: %d\n", superPoder2);
   printf("\n");
          //saida de dados com disputa de cartas
         printf("-=DISPUTA DAS CARTAS=-\n");
   printf("\n");
          //EStruturas de coparação para os atributos das cartas e anunciar qual venceu em quesito (População, area, PIB, pontos turisticos, densidade populacional, PIB per capita)
         printf("POPULAÇÃO MAIOR VENCE:\n");
            if (populacao > populacao2)
            {
               printf("Carta 1 VENCEU!\n");
            } else
            {
               printf("Carta 2 VENCEU!\n");
            };
   
         printf("ÁREA MAIOR VENCE:\n");
            if (area > area2)
            {
               printf("Carta 1 VENCEU!\n");
            } else
            {  
               printf("Carta 1 VENCEU!\n");
            }

         printf("PIB MAIOR VENCE:\n");
            if (pib > pib2)
            {
               printf("Carta 1 VENCEU!\n");
            } else
            {  
               printf("Carta 1 VENCEU!\n");
            }

         printf("PONTO TURISTICO MAIOR VENCE:\n");
            if (pontoTuristico > pontoTuristico2)
            {
               printf("carta 1 VENCEU!\n");
            } else
            {  
               printf("carta 2 VENCEU!\n");
            }

         printf("DENSIDADE POPULACIONAL MENOR VENCE:\n");
            if (densidadePopulacional < densidadePopulacional2)
            {
               printf("carta 1 VENCEU!\n");
            } else
            {  
               printf("carta 2 é VENCEU!\n");
            }
         printf("PIB PER CAPITA MAIOR VENCE:\n");
            if (pibPerCapita > pibPerCapita2)
            {
               printf("Carta 1 VENCEU!\n");
            } else
            {  
               printf("Carta 2 VENCEU!\n");
            }
         printf("SUPER PODER MAIOR VENCE:\n");
            if (superPoder > superPoder2)
            {
               printf("Carta 1 VENCEU!\n");
            } else
            {  
               printf("Carta 2 VENCEU!\n");
            }
            
         
   break;
   case 2:
      printf("A TechNova, empresa líder em inovação tecnológica, Desenvolveu um jogo chamado Super Trunfo com o temas países.\nCada carta inclui as informações como estado, código da carta, nome da cidade, população, PIB, área e número de pontos turísticos, além de propriedades como densidade populacional, PIB per capita e é claro o super poder que é a soma de todas as informações para termos como o nome diz um SUPER TRUNFO.\nVocê pode jogar sozinho ou com amigos!\n");
   break;
   case 3:
   printf("AS REGRAS DO JOGO:\n 1.Os códigos das cartão serão identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n 2. escrever os números de população, área, PIB sem pontos (123456789,245686,65017893,68424).\n" );
   break;
   default:
   printf("Até mais!");
      break;
   }


   return 0;    

}
