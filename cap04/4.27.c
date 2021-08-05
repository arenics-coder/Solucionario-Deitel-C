#include <stdio.h>

int main()
{
	int catetoUm, catetoDois, hipotenusa, cont = 0;

	for(hipotenusa = 1; hipotenusa <= 500; hipotenusa++) {
			for(catetoUm = 1; catetoUm < hipotenusa; catetoUm++){
					for(catetoDois = 1; catetoDois < hipotenusa; catetoDois++){
							
							if(hipotenusa*hipotenusa == catetoUm*catetoUm + catetoDois*catetoDois){
									printf("h:%d c1: %d c2: %d\n", hipotenusa, catetoUm, catetoDois);
									cont++;
							}

					}
			}
	}
	printf("Temos %d ternos pitagóricos no conjunto C={n}, n E N, n <= 500\n", cont);

	return 0;
}
