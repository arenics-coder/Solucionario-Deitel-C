#include <stdio.h>

int main()
{
	int cont = 0, num = 0;
	float soma = 0;

	while(num != 9999)
	{
		scanf("%d", &num);
		if (num == 9999)
			continue;

		soma += num;
		cont++;
	}

	printf("media: %f\n", soma/cont);

	return 0;
}
		
			
