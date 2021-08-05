#include <stdio.h>

int main()
{
		int contLinha, contAsterisc, contEspaco;
		int limiteAsterisc = 1, limiteEspaco = 4;

		for(contLinha = 0; contLinha < 9; contLinha++)
		{
				for(contEspaco = 0; contEspaco < limiteEspaco; contEspaco++)
						printf(" ");
				for(contAsterisc = 0; contAsterisc < limiteAsterisc; contAsterisc++)
						printf("*");
				
				printf("\n");
				if(contLinha < 4){
						limiteEspaco -= 1;
						limiteAsterisc += 2;
				} else {
						limiteEspaco += 1;
						limiteAsterisc -= 2;
				}
		}

		return 0;
}
