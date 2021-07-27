#include <stdio.h>

int main()
{
	int cont;

	for(cont = 1; cont <= 7; cont++)
		printf("%d ", cont);

	printf("\n");

	for(cont = 3; cont <= 23; cont += 5) 
		printf("%d ", cont);

	printf("\n");

	for(cont = 20; cont >= - 10; cont -= 6)
		printf("%d ", cont == 20 ? 10 : cont) ;

	printf("\n");

	for(cont = 19; cont <= 51; cont += 8)
		printf("%d ", cont);

	printf("\n");

	return 0;
}




