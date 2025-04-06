#include <stdio.h> 

        //declaraçao das variaveis

int main(){
      char estado[20];
      char codigo[3];
      char cidade[20];
      float populacao = 1;
      float area = 2;
      float pib = 3;
      int turismo =4;
      float densidade =5;
      float percapta =6;


             //cadastro de carta 01

              printf("CARTA - 01 \n");
  
         printf("estado: \n");
         scanf("%s", &estado);  
 
         printf("codigo da carta: \n");
         scanf("%s", &codigo);

         printf("cidade: \n");
         scanf("%s", &cidade);

         printf("população: \n");
         scanf("%f", &populacao);

         printf("Área em km²: \n");
         scanf("%f", &area);


         printf("PIB: \n");
         scanf("%f", &pib);

        printf("numero de pontos turísticos: \n");
        scanf("%d", &turismo);

    densidade =(populacao / area);
    percapta = (pib / populacao);

 printf("CARTA - 01 \n");
 printf("estado: %s \n", estado);

 printf("codigo da carta: %s \n", codigo);
 printf("cidade: %s \n", cidade);

 printf("populaçao: %f \n ", populacao);
 printf("Área em m²: %f \n", area);

 printf("PIB: %f \n " , pib);
 printf("numero de pontos turísticos: %d \n",turismo);

 printf("densidade populacional:%f \n" ,densidade);
printf("pib per capta;%f \n" , percapta);

 
                 //cadastro carta 02

             printf("CARTA - 02 \n");

         printf("estado: \n");
         scanf("%s", &estado);  

         printf("codigo da carta: \n");
         scanf("%s", &codigo);

         printf("cidade: \n");
         scanf("%s", &cidade);

         printf("população: \n");
         scanf("%f", &populacao);

         printf("Área em km²: \n");
         scanf("%f", &area);

        printf("PIB: \n");
        scanf("%f", &pib);

         printf("numero de pontos turísticos: \n");
         scanf("%d", &turismo);

     densidade =(populacao / area);
     percapta = (pib / populacao);
        
             printf("CARTA - 02 \n");

 printf("estado: %s \n", estado);
 printf("codigo da carta: %s \n", codigo);


printf("cidade: %s \n", cidade);
printf("populaçao: %f \n ", populacao);
   
printf("Área em m²: %f \n", area);
printf("PIB: %f \n " , pib);

printf("numero de pontos turísticos: %d \n",turismo);

printf("densidade populacional:%f \n" ,densidade);
printf("pib per capta;%f \n" , percapta);

printf("CADASTRADO ! \n");


return 0; 
} 