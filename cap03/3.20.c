#include <stdio.h>

int main()
{
	int dias;
	float emprestimo, taxa;

	while(emprestimo != -1) {
		printf("Entre com o valor do empréstimo (-1 para finalizar): ");
		scanf("%f", &emprestimo);
		
		if(emprestimo == -1) continue;

		printf("Entre com a taxa de juros: ");
		scanf("%f", &taxa);
		printf("Entre com o período de empréstimos em dias: ");
		scanf("%d", &dias);

		printf("O valor dos juros é: $%.2f\n\n", emprestimo*taxa*dias/365);
	}
	
	return 0;	
}
