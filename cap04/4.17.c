#include <stdio.h>

int main()
{
	int cont_client, conta;
	float saldo, limite, novo_limite;

	for(cont_client = 1; cont_client <= 3; cont_client++){
		printf("Informe a conta do Cliente %d: ", cont_client);
		scanf("%d", &conta);
		printf("Informe o limite de crédito antes da recessão do cliente %d: ", cont_client);
		scanf("%f", &limite);
		printf("Informe o saldo devedor do cliente %d: ", cont_client);
		
		do {
			scanf("%f", &saldo);
			if(saldo > limite)
				printf("O saldo devedor digitado é maior que o limite informado, digito o saldo correto: ");
		}while (saldo > limite);

		novo_limite = limite / 2;
		
		printf("O limite corrigido do cliente %d é %.2f%s", cont_client, novo_limite, saldo > novo_limite ? " e o saldo devedor supera o novo limite disponível.\n\n" : ".\n\n");
	}

	return 0;
}

