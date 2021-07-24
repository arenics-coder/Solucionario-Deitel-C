#include <stdio.h>

int main()
{
	int num;

	printf("Digite um número inteiro de 5 dígitos: ");
	scanf("%d",&num);

	printf("%d   %d   %d   %d   %d\n", num/10000, (num/1000)%10, (num/100)%10, (num/10)%10, num%10);

	return 0;
}
