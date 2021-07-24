#include <stdio.h>

int main()
{
	int a,b,c,d,e, maior, menor;
	
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	maior=menor=a;

	if(b>maior)
		maior = b;
	if(c>maior)
		maior = c;
	if(d>maior)
		maior = d;
	if(e>maior)
		maior = e;

	if (a==b==c==d==e)
		printf("Todos são iguais!\n"); 


	printf("O maior é %d ",maior);

	if(b<menor)
		menor = b;
	if(c<menor)
		menor = c;
	if(d<menor)
		menor = d;
	if(e<menor)
		menor = e;

	printf("e o menor é %d\n\n", menor);

	return 0;
}
