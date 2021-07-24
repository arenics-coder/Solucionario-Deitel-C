#include <stdio.h>

int main()
{
	int maior = 0, segundoMaior = 0, contador, numero;

	for(contador = 1; contador <= 10; contador++){
		printf("Informe o numero %d: ", contador);
		scanf("%d", &numero);

		if(numero > maior) {
			segundoMaior = maior;
			maior = numero;
		}
	}

	printf("\nO maior número é %d e o segundo maior é %d\n\n", maior, segundoMaior);
	
	return 0;
}
