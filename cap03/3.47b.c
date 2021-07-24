#include <stdio.h>

int main()
{
	float e = 1, fatorial;
	int cont = 1, cont_fatorial;

	while (cont <= 10) {

		fatorial = cont_fatorial = cont;
		while(cont_fatorial > 1)
		{
			cont_fatorial--;
			fatorial *= cont_fatorial;
		}

		e += 1 / fatorial;
		cont++;
	}

	printf("E = %f\n\n", e);

	return 0;
}


