/* Aqui cabe algumas considerações:
 * A operação de divisão envolve os operandos dividendo (D), divisor (d)
 * quociente (q) e o resto (r). De tal forma que:
 * D = d * q + r.
 * Da operação que resultou o dado criptografado desconhecemos o quociente aplicado
 * a cada dígito pela operação de módulo (operador resto de divisão: %),
 * contudo é possível inferir que este ou foi 1 ou 0, dado que o resto, obtido 
 * pelo operador %, é o resto da divisão por 10 e o dividendo é um número entre 7 e 16 (N + 7). 
 * Note que N é um decimal de 0 a 9, o dígito original.
 *
 * Sendo assim, dado C o dígito criptografado e N o dígito original, temos:
 * C = (N + 7)%10, ou
 * (N + 7) = 10*q + C, ou ainda
 * N = 10*q + C - 7.
 *
 * Desta forma, sabendo que N é da ordem das unidades, ou seja, um número entre 0 e 9 (< 10), 
 * podemos afirmar que o quociente (q) é um 1 se, e somente se, o resultado da
 * equação for um número na ordem das unidades, do contrário o quociente é 0.
 */
 
#include <stdio.h>

int main()
{
	int cript = -1, original = 0, cont, digito;

	printf("Informe o dado codificado (inteiro de 4 dígitos):");
	while(cript < 0 || cript > 9999)
		scanf("%d", &cript);

	cont = 4; /* 4 dígitos */
	while(cont > 0) {
		digito = (cript % 10) - 7;
		
		/* para digito < 0, o quociente é 1, logo soma-se 10 */
		if (digito < 0)
			digito += 10;

		/* definir a posição original do digito */
		if(cont == 4)
			original += digito * 100;
		else if (cont == 3)
			original += digito * 1000;
		else if (cont == 2)
			original += digito * 1;
		else if (cont == 1)
			original += digito * 10;
		cont--;
		cript /= 10;
	}

	printf("O dado original é: %d\n", original);

	return 0;
}


	
