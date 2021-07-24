#include <stdio.h>

int main()
{
	float e = 1, fatorial, x, num_x = 1;
	int cont = 1, cont_fatorial;

	printf("Informe o expoente de E: ");
	scanf("%f", &x);

	while (cont <= 15) {

		fatorial = cont_fatorial = cont;
		while(cont_fatorial > 1)
		{
			cont_fatorial--;
			fatorial *= cont_fatorial;
		}

		num_x *= x;
		e += num_x / fatorial;
		cont++;
	}

	printf("E^2 = %f\n\n", e);

	return 0;
}


