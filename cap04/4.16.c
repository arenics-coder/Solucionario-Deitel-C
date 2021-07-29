#include <stdio.h>

int main()
{
	int linha, coluna;

	printf("\n(A)\n");
	
	for(linha = 0; linha < 10; linha++) {
		for(coluna = 0; coluna < linha +1; coluna++)
			printf("*");
		printf("\n");
	}

	printf("\n(B)\n");

	for(linha = 0; linha < 10; linha++){
		for(coluna = 10; coluna > linha; coluna--)
			printf("*");
		printf("\n");
	}

	printf("\n(C)\n");
	
	for(linha = 0; linha < 10; linha ++){
		for(coluna = 0; coluna < 10; coluna ++){
			if(linha <= coluna)
				printf("*");
			else
				printf(" ");
		}
		
		printf("\n");
	}

	
	printf("\n(D)\n");

	for(linha = 0; linha <= 9; linha++){
		for(coluna = 9; coluna >= 0; coluna--){
			if(coluna > linha)
				printf(" ");
			else 
				printf("*");
		}
		printf("\n");
	}

	return 0;
}
				
