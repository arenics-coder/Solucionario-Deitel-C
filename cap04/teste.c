#include <stdio.h>

int main()
{
	int inteiro;

	inteiro = 10;

	while(inteiro > 0)
		printf("%d\n", inteiro /= 2);

	return 0;
}
