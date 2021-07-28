#include <stdio.h>

int main()
{
	int cont, produto = 1;

	for(cont = 1; cont <= 15; cont += 2)
		produto *= cont;

	printf("produto: %d\n", produto);

	return 0;
}
