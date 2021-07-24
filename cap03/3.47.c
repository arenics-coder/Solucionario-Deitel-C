#include <stdio.h>

int main()
{
	int n, fatorial;

	printf("Informe um número inteiro: ");
	scanf("%d",&n);
	
	if(n<1){
		printf("O fatorial de número negativos não é definido\n");
		return -1;
	}

	fatorial = n;
	while(n>1){
		fatorial *= --n;
	}

	printf("O fatorial é %d\n\n",fatorial);

	return 0;
}
