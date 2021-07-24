#include <stdio.h>

int main() {
	float pagamento = 0, valorHora;
	int horasTrabalhadas = 0;

	while(horasTrabalhadas != -1){
		printf("Entre com o de horas trabalhadas (-1 para finalizar): ");
		scanf("%d", &horasTrabalhadas);

		if(horasTrabalhadas == -1)
			continue;

		printf("Entre com o valor da hora normal do trabalhor (R$ 00,00): ");
		scanf("%f", &valorHora);

		if(horasTrabalhadas - 40 > 0){
			pagamento += 40*valorHora;
			horasTrabalhadas -= 40;
			pagamento += horasTrabalhadas*valorHora*1.5;
		}
		else {
			pagamento += valorHora*horasTrabalhadas;
		}
		
		printf("Salário: $%.2f\n\n", pagamento);
		horasTrabalhadas = 0;	
		pagamento = 0;
	}

	return 0;
}

	
