#include <stdio.h>

int main()
{
	float a = 0, b = 0, c = 0;

	while ( a <= 0 || b <= 0 || c <= 0){
		scanf("%f%f%f", &a, &b, &c);
	}

	if(b+c > a && a+c > b && a+b > c)
		printf("%f, %f e %f podem compor os lados de um triângulo.\n\n", a, b, c);
	else
		printf("%f, %f e %f não podem compor os lados de um triângulo.\n\n", a, b, c);

	return 0;

}
