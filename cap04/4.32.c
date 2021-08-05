
#include <stdio.h>

int main()
{
		int limiteContLinha;
		int contLinha, contAsterisc, contEspaco;
		int limiteAsterisc = 1, limiteEspaco;//, limiteEspaco = 4;

		printf("Número natural impar menor que 20:\n");
		do {
				scanf("%d", &limiteContLinha);
		}while(limiteContLinha < 1 || limiteContLinha > 19 || limiteContLinha%2 == 0);

		limiteEspaco = limiteContLinha/2;

		for(contLinha = 0; contLinha < limiteContLinha; contLinha++)
		{
				for(contEspaco = 0; contEspaco < limiteEspaco; contEspaco++)
						printf(" ");
				for(contAsterisc = 0; contAsterisc < limiteAsterisc; contAsterisc++)
						printf("*");
				
				printf("\n");
				if(contLinha < limiteContLinha/2){
						limiteEspaco -= 1;
						limiteAsterisc += 2;
				} else {
						limiteEspaco += 1;
						limiteAsterisc -= 2;
				}
		}

		return 0;
}
