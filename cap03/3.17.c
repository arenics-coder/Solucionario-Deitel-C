#include <stdio.h>

int main()
{
	int km=0, somaKm=0;
	float litros=0, somaLitros=0;

	while(litros != -1){
		printf("Entre com os litros consumidos (-1 para finalizar): ");
		scanf("%f",&litros);

		if(somaLitros == 0) {
			if(somaKm == 0)
				printf("Não há dados a exibir\n");
			else
				printf("A taxa total de km/litro foi %f\n",somaKm/somaLitros);
		}
		else {
			printf("Entre com os km pecorridos: ");
			scanf("%d",&km);
			printf("A taxa km/litro para esse tanque foi: %f\n", km/litros);
			somaKm += km;
			somaLitros += litros;
		}
	}

	return 0;
}

