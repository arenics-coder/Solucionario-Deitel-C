#include <stdio.h>
#include <math.h>

int main()
{
	int ano;
	double quantia, principal = 10000.0, taxa;

	printf("%4s%21s\n", "Ano", "Saldo na conta");

	for(taxa = 0.05; taxa <= 0.10; taxa += 0.01){
		printf("Taxa de %lf ao ano\n", taxa);
		for(ano = 1; ano <= 10; ano++){
			quantia = principal * pow(1 + taxa, ano);
			printf("%d%21.2f\n", ano, quantia);
		}
	}

	return 0;
}


