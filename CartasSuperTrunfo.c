#include <stdio.h> 

        //declaraçao das variaveis

int main(){
      char estado[20];
      char codigo[3];
      char cidade[20];
      int populacao = 1;
      float area = 2;
      float pib = 3;
      int turismo =4;
      float densidade =5;
      float percapta =6;
      float suprpoder =7;
      char estado2[20];
      char codigo2[3];
      char cidade2[20];
      int populacao2 = 1;
      float area2 = 2;
      float pib2 = 3;
      int turismo2 =4;
      float densidade2 =5;
      float percapta2 =6;
      float suprpoder2 =7;
      int   opcao =8;

              //entrada de dados 

             //cadastro de carta 01


              printf("ADICIONE A CARTA - 01 \n");
  
         printf("estado: \n");
         scanf("%s", &estado);  
 
         printf("codigo da carta: \n");
         scanf("%s", &codigo);

         printf("cidade: \n");
         scanf("%s", &cidade);

         printf("população: \n");
         scanf("%d", &populacao);

         printf("Área em km²: \n");
         scanf("%f", &area);


         printf("PIB: \n");
         scanf("%f", &pib);

        printf("numero de pontos turísticos: \n");
        scanf("%d", &turismo);
 
          //regras de cauculos 

    densidade =(populacao / area);
    percapta = (pib / populacao);
    suprpoder =(populacao + area + pib + turismo + percapta - densidade);
 
          //saida de dados  

 printf("CARTA - 01 \n\n");
 printf("estado: %s \n", estado);

 printf("codigo da carta: %s \n", codigo);
 printf("cidade: %s \n", cidade);

 printf("populaçao: %.2d \n ", populacao);
 printf("Área em m²: %.2f \n", area);

 printf("PIB: %.2f \n " , pib);
 printf("numero de pontos turísticos: %.2d \n",turismo);

 printf("densidade populacional:%.2f \n" ,densidade);
printf("pib per capta;%.2f \n" , percapta);
 
printf("super poder:%.2f \n\n" , suprpoder);
 
                 //entrada de dados 

                 //cadastro carta 02

             printf("ADICIONE A CARTA - 02 \n\n");

         printf("estado: \n");
         scanf("%s", &estado2);  

         printf("codigo da carta: \n");
         scanf("%s", &codigo2);

         printf("cidade: \n");
         scanf("%s", &cidade2);

         printf("população: \n");
         scanf("%d", &populacao2);

         printf("Área em km²: \n");
         scanf("%f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

         printf("numero de pontos turísticos: \n");
         scanf("%d", &turismo2);

                //regras de cauculos 

     densidade2 =(populacao2 / area2);
     percapta2 = (pib2 / populacao2);
     suprpoder2 =(populacao2 + area2 + pib2 + turismo2 + percapta2 - densidade2);

                //saida de dados  

             printf("CARTA - 02 \n\n");

 printf("estado: %s \n", estado2);
 printf("codigo da carta: %s \n", codigo2);


printf("cidade: %s \n", cidade2);
printf("populaçao: %.2d \n ", populacao2);
   
printf("Área em m²: %.2f \n", area2);
printf("PIB:%.2f \n " , pib2);

printf("numero de pontos turísticos: %.2d \n",turismo2);

printf("densidade populacional:%.2f \n" ,densidade2);
printf("pib per capta:%.2f \n" , percapta2);

printf("super poder:%.2f \n\n" , suprpoder2);

printf("CADASTRADO ! \n\n");

          //comparaçao das cartas 


          printf("-COMPARAÇAO DE CARTAS-\n\n");
          
          printf("ESCOLHA O ATRIBUTO DE COMPARAÇÃO \n");
          printf("populaçao -1\nárea -2\npib -3\npontos turisticos -4\ndensidade populacional -5\npib per capta -6\nsuper trunfo -7\n\n");
          scanf ("%d" ,&opcao);

         switch (opcao)
         {
         case 1:
          printf("o atributo de comparaçao e populaçao\n\n");
          printf("carta-1:%s:%d \n", cidade, populacao);
          printf("carta-2:%s:%d \n", cidade2, populacao2);

          if (populacao > populacao2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }

          break;
          case 2:
          printf("o atributo de comparaçao e área\n\n");
          printf("carta-1:%s:%f \n", cidade, area);
          printf("carta-2:%s:%f \n", cidade2, area2);

          if (area > area2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }
          break;
          case 3:
          printf("o atributo de comparaçao e PIB\n\n");
          printf("carta-1:%s:%f \n", cidade, pib);
          printf("carta-2:%s:%f \n", cidade2, pib2);

          if (pib > pib2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }
          break;
          case 4:
          printf("o atributo de comparaçao e pontos turisticos\n\n");
          printf("carta-1:%s:%d \n", cidade, turismo);
          printf("carta-2:%s:%d \n", cidade2, turismo2);

          if (turismo > turismo2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }
          break;
          case 5:
          printf("o atributo de comparaçao e densidade populacional\n\n");
          printf("carta-1:%s:%f \n", cidade, densidade);
          printf("carta-2:%s:%f \n", cidade2, densidade2);

          if (densidade < densidade2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }
          break;
          case 6:
          printf("o atributo de comparaçao e PIB per capta\n\n");
          printf("carta-1:%s:%f \n", cidade, percapta);
          printf("carta-2:%s:%f \n", cidade2, percapta2);

          if (percapta > percapta2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }
          break;
          case 7:
          printf("o atributo de comparaçao e super trunfo\n\n");
          printf("carta-1:%s:%f \n", cidade, suprpoder);
          printf("carta-2:%s:%f \n", cidade2, suprpoder2);

          if (suprpoder > suprpoder2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
          } else {
            printf ("Resultado: Carta 2 (%s) venceu!\n",cidade2);
          }
          break;
         default:
         printf("opçao invalida\n\n");
          break;
         }
         
return 0; 
} 