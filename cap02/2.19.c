#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c;

	
	printf("Entre com três inteiros diferentes: ");
	scanf("%d%d%d",&a,&b,&c);

	printf("A soma é %d\nA média é %d\nO produto é %d\n", a+b+c, (a+b+c)/3, a*b*c); 

	if(a<b)
		if(b<c)
			printf("O menor é %d\n", a);
	if(b<a)
		if(a<c)
			printf("O menor é %d\n", b);
	if(c<b)
		if(b<a)
			printf("O menor é %d\n", c);

	return 0;
}
