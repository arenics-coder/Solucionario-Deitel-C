#include <stdio.h>

int main()
{
	int cont, inteiro, soma = 0;

	scanf("%d", &cont);
	if(cont < 0)
		return 0;

	while(cont > 0){
		scanf("%d", &inteiro);
		soma += inteiro;
		cont--;
	}

	printf("Soma: %d\n", soma);

	return 0;
}
