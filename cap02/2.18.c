#include <stdio.h>


int main(int argc, char **argv)
{
	int a,b;

	printf("Informe dois números interios:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d é maior\n", a);
	if(a<b)
		printf("%d é maior\n", b);
	
	printf("Estes números são iguais\n");

	return 0;
}
