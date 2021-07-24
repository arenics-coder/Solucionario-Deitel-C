#include <stdio.h>

int main() 
{
	int linha, coluna;

	for(linha = 0; linha < 8; linha++){
		for(coluna = 0; coluna < 8; coluna++){
			if((linha + coluna)%2 == 0)
				printf("*");
			else
				printf(" ");
		}
		
		printf("\n");
	}

	return 0;
}
