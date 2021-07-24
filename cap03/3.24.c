#include <stdio.h> 

int main()
{
	int num, cont, maior = 0;

	for(cont = 0; cont < 10; cont ++){
		printf("Entre com o número %d: ", cont + 1);
		scanf("%d", &num);
		
		if(num > maior)
			maior = num;
	}

	printf("O maior número foi: %d\n", maior);

	return 0;
}
