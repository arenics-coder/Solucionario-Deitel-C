#include <stdio.h>

int main()
{
	int cont;

	for(cont = 1; cont <= 100; cont++)
	{
		printf("*");
		if (cont % 10 == 0) printf("\n");
	}

	return 0;
}
