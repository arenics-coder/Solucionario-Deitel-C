#include <stdio.h>

int main()
{
	int num = 0, inverso = 0, cont;


	while((num < 10000) || (num > 99999)) {
		printf("Digite um número inteiro de 5 dígitos: ");
		scanf("%d", &num);
	}

	/*
	for(cont = 10; cont <= 100000; cont *= 10)
		inverso += (num%cont)/(cont/10)*(100000/cont);
		*/
	for(cont = 10000; cont >= 1; cont /= 10)
	{
		inverso += (num/cont)%10 * (10000/cont);
	}
			
	// debug
	printf("inverso: %d\n", inverso);

	if (num == inverso)
		printf("%d é um palíndromo.\n\n", num);
	else
		printf("%d não é um palíndromo.\n\n", num);


	return 0;
}
