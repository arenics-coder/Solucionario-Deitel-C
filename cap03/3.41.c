#include <stdio.h>

int main()
{
	int multiplo = 2;

	/* O tipo 'int' é representado por uma quantidade de bytes definida para cada 
	 * ambiente em que compilador C é implementado. 
	 * O padrão ANSI C determina o mínimo de bytes necessários à representação do 
	 * tipo 'int', porém não determina a quantidade máxima, isto fica a critério 
	 * de quem desenvolve o compilidor, que por sua vez leva em consideração o ambiente 
	 * para o qual o compilador está sendo desenvolido, por exemplo: para um PC 
	 * ou microcontrolador.
	 *
	 * Os dados são representados na memória em formato binário (0's e 1's).
	 * Multiplicar por 2, base númerica binária, é equivalente à operação
	 * de deslocamento de bits para esquerda, portanto se o tipo 'int' para
	 * o compilador for representado por 4 bytes e comerçarmos pelo valor 2,
	 * temos: 00000000 00000000 00000000 00000010 bits registrados na memória, as
	 * sucessivas  multiplicações por 2 leva ao deslocamento do único bit setado
	 * até a posição mais significativa do conjuto de 4 bytes, esta posição é
	 * usada para informar se o número é negativo, ou não, na técnica de representação
	 * binária denominada 'Complemento por 2', razão pela qual a função 'printf',
	 * através do especificador de tipo '%d', formata e representa o número negativo,
	 * o último número possível de ser respresentado com as operações de multiplicação 
	 * por 2.
	 *
	 * Depois do último número possível de ser representado, o único  bit 1 é "perdido" com mais
	 * uma multiplicação, restando apenas os 0's preenchidos em todos os bits do conjunto 
	 * e por isso o resultado final da multiplicação é 0 */

	
	while(1){
		printf("%u\n", multiplo);
		multiplo *= 2;

		if (multiplo == 0)
			break;
	}


	return 0;
}
