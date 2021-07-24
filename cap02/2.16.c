#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2;

	printf("Digite dois números interios:\n");
	scanf("%d%d",&n1, &n2);
	printf("Soma: %d, Produto: %d, Divisão (quociente): %d, Resto: %d\n", n1+n2, n1*n2, n1/n2, n1%n2);

	return 0;
}
