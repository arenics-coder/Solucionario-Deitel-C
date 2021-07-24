#include <stdio.h>

int main()
{
	float raio, diametro, perimetro, area;

	printf("Raio: ");
	scanf("%f", &raio);

	diametro = 2 * raio;
	perimetro = 2 * 3.14159 * raio;
	area = 3.14159 * raio * raio;
	
	printf("diametro: %f, perímetro: %f, área: %f\n\n", diametro, perimetro, area);

	return 0;
}
