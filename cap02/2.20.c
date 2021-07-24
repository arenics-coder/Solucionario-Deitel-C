#include <stdio.h>

int main(int argc, char **argv)
{

	float raio;

	printf("Informe o raio da circunferência: ");
	scanf("%f",&raio);

	printf("O diâmetro é %f, o comprimento é %f e a área é %f\n", 2*raio, 2*3.14159*raio, 2*3.141592*raio*raio);

	return 0;
}
