#include <stdio.h>

int main()
{
	int dado = -1;
	int dA = 0, dB = 0, dC = 0, dD = 0; /* dígitos */
	int digito, criptografado = 0, contDigito = 4, dado2;

	printf("Informe um inteiro positivo de 4 dígitos: ");
	while(dado < 0 || dado > 9999)
		scanf("%d", &dado);

	dado2 = dado;

	dD = dado % 10;
	dD = (dD + 7) % 10;
	dado /= 10;

	dC = dado % 10;
	dC = (dC + 7) % 10;
	dado /= 10;

	dB = dado % 10;
	dB = (dB + 7) % 10;
	dado /= 10;

	dA = dado % 10;
	dA = (dA + 7) % 10;

	while(contDigito > 0) {
		digito = (dado2 % 10);
		digito = (digito + 7) % 10;
		
		if(contDigito == 4)
			criptografado += digito * 100;
		else if(contDigito == 3)
			criptografado += digito * 1000;
		else if(contDigito == 2)
			criptografado += digito * 1;
		else if(contDigito == 1)
			criptografado += digito * 10;

		contDigito--;
		dado2 /= 10;
	}


	dado = dA*10 + dB*1 + dC*1000 + dD*100;
	printf("Criptografado: %4d\n", dado);

	printf("Criptografado2: %d\n", criptografado);
	return 0;
}
