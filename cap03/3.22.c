#include <stdio.h>

int main()
{
	int num = 2;

	printf("O valor de \"num\" será decrementado nos parâmetros de chamada desta função printf: valor de num = %d\n", num--);
	printf("Note o valor de \"num\" após o chamado o primeiro chamado da função printf: valor de num = %d\n", num);
	printf("O valor de \"num\" será drecrementado nos parâmetros de chamada desta função printf: valor de num = %d\n", --num);
	printf("Note o valor de \"num\" após o chamado o segundo chamado da função printf: valor de num = %d\n", num);

	return 0;
}
