#include <stdio.h>

int main()
{
	int cont, binario = 0, decimal, posicao = 1;

	for(cont = 1; cont <= 256; cont++){
		decimal = cont;
		while(decimal > 0){
			binario += (decimal % 2)*posicao;
			decimal /= 2;
			posicao *= 10;	
		}

		printf("decimal:%3d\tbinario:%10d\toctal:%3o\thexadecimal:%2x\n", cont, binario, cont, cont);
		binario = 0;
		posicao = 1;
	}


	return 0;
}
