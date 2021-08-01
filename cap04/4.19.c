#include <stdio.h>

int main()
{
	int nProduto, contProduto, cont_dia = 0; /* cont_dia == 6 -> uma semana */
	float vendasSemana = 0, preco;

	do {
		printf("Número do produto [1 a 5 ou 0 para encerrar o dia %d]: ", cont_dia + 1);
		do{
			scanf("%d", &nProduto);
			if(nProduto < 0  || nProduto > 5)
				printf("\nNúmero inválido! [1 - 5 / 0 encerrar registros do dia %d]: ", cont_dia + 1);
		}while(nProduto < 0 || nProduto > 5);

		if (!(nProduto == 0)) {
			switch(nProduto) {
				case 1:
					preco = 2.98;
					break;
				case 2:
					preco = 4.50;
					break;
				case 3: 
					preco = 9.98;
					break;
				case 4: 
					preco = 4.49;
					break;
				case 5:
					preco = 6.87;
					break;
				default:
			}
			
			printf("Quantidade vendida do produto %d no dia %d: ", nProduto, cont_dia + 1);
			scanf("%d", &contProduto);

			vendasSemana += contProduto * preco;

		} else {
			cont_dia++;
		}

	}while(!(cont_dia == 7)); /* dia 0 ao dia 6 */

	printf("O total de vendas foi $%.2f\n\n", vendasSemana);

	return 0;
}
