#include <stdio.h>

int main()
{
	int binario, decimal = 0, potencia = 1;


	printf("Digite um número binário (0's e 1's): ");
	scanf("%d", &binario);

	while(binario > 0)
	{
		decimal += binario%10*potencia;
		binario /= 10;
		potencia *= 2;
	}

	printf("Em base decimal é %d\n", decimal);


	return 0;
}
