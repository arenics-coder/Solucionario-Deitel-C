#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Digite 2 números inteiros: ");	
	scanf("%d%d",&a,&b);

	if(a%b == 0)
		printf("%d é múltiplo de %d\n\n", a,b);

	return 0;
}
