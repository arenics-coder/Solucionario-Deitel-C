#include <stdio.h>

int main()
{
	int linha, asteriscos;

	for(linha = 0; linha < 5; linha++){
		do{
			scanf("%d", &asteriscos);
			if(asteriscos < 1 || asteriscos > 30)
				printf("Deve ser um núemro de 1 a 30: ");
		}while(asteriscos < 1 || asteriscos > 30);

		while(asteriscos-- > 0)
			printf("*");
		printf("\n");
	}

	return 0;
}
