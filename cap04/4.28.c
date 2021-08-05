#include <stdio.h>

int main()
{
		int paycode = -1;
		float payment = 0.0, pagamentoHora, horasTrabalhadas;
		float vendas;
		int quantidadeProduzida;
		float valorUnidadeProduzida;

		while(paycode != 0){
				printf("Informe o código de pagamento [1 - 4, 0 = sair]: ");
				scanf("%d", &paycode);

				switch(paycode){
						case 1:
								printf("Informe o salário do gerente: ");
								scanf("%f", &payment);

								printf("Pagamento: %.2f\n", payment);
								payment = 0.0;
								break;
						case 2:
								printf("Informe o valor da hora trabalhado do colaborador: ");
								scanf("%f", &pagamentoHora);
								printf("Informe a quantidade de horas trabalhadas: ");
								scanf("%f", &horasTrabalhadas);
								
								if(horasTrabalhadas > 40.0){
										payment = (horasTrabalhadas - 40)*pagamentoHora*1.5;
										horasTrabalhadas -= (horasTrabalhadas - 40);
								}


								payment += horasTrabalhadas*pagamentoHora;
								printf("Pagamento: %.2f\n", payment);
								payment = 0.0;
								break;

						case 3:
								payment = 250.0;
								printf("Informe o total de vendas brutas do colaborador: ");
								scanf("%f", &vendas);
								payment += 0.057 * vendas;
								printf("Pagamento: %.2f\n", payment);

								payment = 0.0;
								break;

						case 4:
								printf("Informe a quantidade produzida pelo colaborador: ");
								scanf("%d", &quantidadeProduzida);
								printf("Informe o valor pago por unidade produzida: ");
								scanf("%f", &valorUnidadeProduzida);

								payment = quantidadeProduzida * valorUnidadeProduzida;
								printf("Pagamento: %.2f\n", payment);

								payment = 0.0;
								break;
						case 0:
								printf("Saindo...\n");
								break;
						default:
								printf("Código inválido [1 - 4, 0 = sair]\n");
				}
		}

		return 0;
}
