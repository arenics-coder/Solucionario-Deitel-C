#include <stdio.h>

int main()
{
	int num;

	printf("Digite um número inteiro:\n");
	scanf("%d",&num);
	if(num%2 == 0)
		printf("%d é par\n",num);
	if(num%2 != 0)
		printf("%d é impar\n", num);

	return 0;
}
