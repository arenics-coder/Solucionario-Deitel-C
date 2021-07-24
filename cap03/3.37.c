#include <stdio.h>

int main()
{
	unsigned long cont;

	for(cont = 1; cont <= 3000000000; cont++)
		if(cont%1000000000 == 0) printf("\n1.000.000.000\n");

	return 0;
}
