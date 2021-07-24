/* Analise de resultados de exame */ 
#include <stdio.h> 
int main ( ) 
{ 
	/* inicializando variáveis em declarações */ 
	int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado; 
	/* processamento de 10 alunos; loop controlado por contador*/
       	while (aluno <= 10) { 
		printf("Entre com o resultado (1=aprovado,2=reprovado): "); 

		while(resultado != 1 && resultado != 2)
			scanf("%d", &resultado);

		if (resultado == 1) /* if/else no interior do while */ 
			aprovacoes = aprovacoes + 1; 
		else reprovacoes = reprovacoes + 1; 
			aluno = aluno + 1; 

		resultado = 0;
	} 
	
	printf("Aprovados %d\n", aprovacoes); 
	printf("Reprovações %d\n", reprovacoes); 
	
	if (aprovacoes > 8) printf ("Cobrar taxa escolar\n"); 
	return 0; /* finalização correta */ 
}
