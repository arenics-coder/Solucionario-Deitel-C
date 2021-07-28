#include <stdio.h>

int main()
{
	int soma = 0, cont;

	for(cont = 2; cont <= 30; cont += 2)
		soma += cont;

	printf("soma: %d\n", soma);

	return 0;
}
