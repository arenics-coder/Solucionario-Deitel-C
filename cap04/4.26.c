#include <stdio.h>

int main()
{
	int cont = 1, indice314 = 0, indice3141 = 0, indice31415 = 0, indice314159 = 0, flagIndice = 0;
	double denominador = 1.0, pi = 0.0;
	
	printf("Termos - Série\n");
	while(cont <= 1000000)
	{
		if(cont % 2 != 0) /*se cont for impar -> soma*/
			pi += 4/(denominador);
		else
			pi -= 4/denominador;

		if(flagIndice == 0 && ((3.14 > pi) ? (3.14 - pi) <= 0.001 : (pi - 3.14) <= 0.001)){ /* se o erro for menor 0.009, então é a primeira ocorrência de 3.14...) */
				indice314 = cont;
				flagIndice = 1;
		}

		if(flagIndice == 1 && ((3.141 > pi) ? (3.141 - pi) <= 0.0001 : (pi - 3.141) <= 0.0001)){ 
				indice3141 = cont;
				flagIndice = 2;
		}

		if(flagIndice == 2 && ((3.1415 > pi) ? (3.1415 - pi) <= 0.00001 : (pi - 3.1415) <= 0.00001)){ 
				indice31415 = cont;
				flagIndice = 3;
		}

		
		if(flagIndice == 3 && ((3.14159 > pi) ? (3.14159 - pi) <= 0.000001 : (pi - 3.14159) <= 0.000001)){
				indice314159 = cont;
				flagIndice = -1;
		}

		printf("%2d - %10lf\n", cont, pi);
		denominador += 2;
		cont++;
	}

	printf("3.14 ocorre na intereção %d\n3.141 na %d\n3.1415 na %d\n3.14159 na %d\n\n", indice314, indice3141, indice31415, indice314159);

	return 0;
}
