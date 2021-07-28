#include <stdio.h>

int main()
{
	int cont, inteiro, menor;

	scanf("%d", &cont);
	if(cont <= 0)
		return 0;
	scanf("%d", &inteiro); /* primeiro número */
	menor = inteiro;
	cont--; /* lido um número */

	while(cont > 0){ /* ler os demais, se for o caso */
		scanf("%d", &inteiro);
		if(inteiro < menor)
			menor = inteiro;
		cont--;
	}

	printf("menor: %d\n", menor);

	return 0;
}

