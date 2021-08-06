#include <stdio.h>

/* I IV V IX X XL L XC C*/

int main()
{
   int numero = 1, numeroImprimir;

   while(numero <= 100){
	  numeroImprimir = numero;

	  while(numeroImprimir > 0){
		 while(numeroImprimir == 100){
			printf("C");
			numeroImprimir -= 100;
		 }

		 if(numeroImprimir >= 90){
			printf("XC");
			numeroImprimir -= 90;
		 }

		 while(numeroImprimir >= 50){
			printf("L");
			numeroImprimir -= 50;
		 }

		 if(numeroImprimir >= 40){
			printf("XL");
			numeroImprimir -= 40;
		 }

		 while(numeroImprimir >= 10){
			printf("X");
			numeroImprimir -= 10;
		 }

		 if(numeroImprimir >= 9){
			printf("IX");
			numeroImprimir -= 9;
		 }

		 if(numeroImprimir >= 5){
			printf("V");
			numeroImprimir -= 5;
		 }

		 if(numeroImprimir >= 4){
			printf("IV");
			numeroImprimir -= 4;
		 }

		 while(numeroImprimir >= 1){
			printf("I");
			numeroImprimir -= 1;
		 }

		 numeroImprimir--;
		 printf("  ");
	  }
	  numero++;
   }
   
   printf("\n");

   return 0;
}
   
