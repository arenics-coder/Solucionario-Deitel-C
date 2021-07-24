#include <stdio.h>

int main()
{
	float vendas = 0, salario = 0;

	while(vendas != - 1){
		printf("Entre com a venda em dólares (-1 para finalizar): ");
		scanf("%f", &vendas);

		if(vendas == -1)
			continue;

		salario = 200 + 0.09 * vendas;
		printf("Salário: $%.2f\n\n", salario);
	}

	return 0;
}
