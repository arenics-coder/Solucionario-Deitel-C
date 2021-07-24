#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;

	while ( a <= 0 || b <= 0 || c <= 0){
		scanf("%d%d%d", &a, &b, &c);
	}

	if(b+c > a && a+c > b && a+b > c)
		printf("%d, %d e %d podem compor os lados de um triângulo.\n\n", a, b, c);
	else
		printf("%d, %d e %d não podem compor os lados de um triângulo.\n\n", a, b, c);

	return 0;

}
