#include <stdio.h>

int main()
{
	int N;
			
	printf("A\tA+2\tA+4\tA+6\n");
	for(N = 3; N <= 15; N += 3)
			printf("%d\t%d\t%d\t%d\n", N, N+2, N+4, N+6);

	return 0;
}
