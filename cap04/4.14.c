#include <stdio.h>

int main()
{
	int cont, fatorial_cont, fatorial;

	for(cont = 1; cont <= 5; cont++){
		fatorial = fatorial_cont = cont;
		while(fatorial_cont != 1)
			fatorial *= --fatorial_cont;

		printf("fatorial de %d é %d\n", cont, fatorial);
	}

	return 0;
}

/* Não há tipo de dado definido em compiladores usuais da linguagem C capaz
 * de armazenar números da magnitude de 20!.
 * Para operar com números dessa grandeza pode-se usar técnicas numéricas, para imprimir, ou pode-se
 * definir estruturas de dados capazes de armezenar números tão grandes quanto forem os recursos computacionais disponíveis 
 * para representá-los (memória)
 */
