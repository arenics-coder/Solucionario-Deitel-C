
#include <stdio.h>

int main()
{
	int lado = 0, linha, coluna;

	while(lado < 1 || lado > 20 ){
		printf("Informe o comprimento do lado: ");
		scanf("%d", &lado);
	}


	for(linha = 0; linha < lado; linha++){
		for(coluna = 0; coluna < lado; coluna++)
			printf("%s", (lado - coluna == lado || lado - coluna ==  1 || linha == 0 || linha == lado - 1)? "*" : " ");
		printf("\n");
	}

	return 0;
}
