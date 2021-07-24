#include <stdio.h>

int main()
{
	int nConta = 0;
	float saldoDevedor, totalCobrancas, totalCreditos, limiteCredito, saldoDevedorAutal;

	while (nConta != -1)
	{
		printf("Entre com número da conta (-1 para finalizar): ");
		scanf("%d", &nConta);
		
		if(nConta == -1)
			continue;

		printf("Entre com o saldo inicial: ");
		scanf("%f", &saldoDevedor);
		printf("Entre com o total de cobranças: ");
		scanf("%f", &totalCobrancas);
		printf("Entre com o total de créditos: ");
		scanf("%f", &totalCreditos);
		printf("Entre com o limite de crédito: ");
		scanf("%f", &limiteCredito);
		
		/* Obs.: No problema, o que ele designa como crédito é o saldo positivo da conta, no código designado como totalCreditos */
		saldoDevedor += totalCobrancas - totalCreditos;

		printf("Conta: %d\n", nConta);
		printf("Limite de crédito: %.2f\n", limiteCredito);
		printf("Saldo: %.2f\n", saldoDevedor);
		if(saldoDevedor > limiteCredito)
			printf("Limite de Crédito Excedido.\n");
		printf("\n");

	}
	
	return 0;
}
