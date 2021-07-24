#include <stdio.h>

int main()
{
	int inteiro, cont7 = 0;
	scanf("%d", &inteiro);

	while(inteiro >= 7) {
		if(inteiro % 10 == 7)
			cont7++;
		inteiro /= 10;
	}
	
	printf("Número de 7's no inteiro: %d\n", cont7);

	return 0;

}
