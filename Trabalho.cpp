// Programa de  matemática
//Calculadorora: Somar, Subitração, Multiplicação, Divisão, Media,
//Apenas só vai funcionar com 2 numeros
#include<stdio.h>
//#include <.h>
int main()
{
    //Variável 
int num1, num2, soma, subtracao, multi, divi, media, opcao,opcao2, porc1, porc2,porcjuntos;
char soma1;

    printf("\tCalculadora\n");
    printf("Apenas 2 numeros: ");
     scanf("%i%i", &num1, &num2);


    soma            = num1 + num2; //Somar
    subtracao       = num1 - num2; //Subtração
    multi           = num1 * num2; //Multiplicação
    divi            = num1 / num2; //Divisão
    media           =(num1 + num2) /2; //Media
    porc1            = num1 *100; //Porcentagem 
    porc2            = num2 *100; // Porcentagem 2 
    porcjuntos       = (num1 + num2) * 100; // Porcentagem juntos
    // tabuada    

  
     printf( "A soma e: %i\n", soma );
    printf( "A subtracao e: %i\n", subtracao );
    printf( "A Multiplicacao e: %i \n", multi );
    printf( "A divisao e: %i \n", divi );
     printf("A Media e: %i \n", media);
     printf("A Porcentagem e: %i \n", porc1);
     printf("A porcentagem num 2 e: %i \n ", porc2);
     printf("A porcentagem juntos e: %i \n ", porcjuntos);

 //Teste feito numero ser maior do que 10000 mil ou não

 if (soma >=10000)
 {
    printf("Seu numero deu resultado maior do que 10000\n");
    //fflush(sdin);
  }

  else 
   {
     printf("Seu numero \x82 menor do que 10000\n");
  }
       printf("Obrigado aperte qualquer tecla para fechar");

    do 
    {
        //Deseja continuar

    printf("\t\nDeseja continuar?\n");
    printf("\n Digite uma opcao: \t\n{1} sim\t\n ou \t\n{2} nao");
    printf("\nResposta: ");
    scanf("%i", &opcao );

    //Se for Opcao 2

     if (opcao == 2){
    printf("Gostou do Programa?\n");
    printf("{3}Sim {4}Nao\n");
    scanf("%i", &opcao2);}
    printf("\nObrigado\n");
    if (opcao<=0 || opcao >4){
        printf("\tERRO");
    }
    }while(opcao == 1);

 return 0;
}
