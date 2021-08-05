#include <stdio.h>

int main()
{
	int x, y;
	int a, b, g;
	int i, j;

	scanf("%d%d", &x, &y);
	printf("!(%d < 5) && !(%d >= 7) é %s assim como !((%d < 5) || (%d >= 7)) é %s\n", 
	x, y, (!(x < 5) && !(y >= 7)) == 1 ? "verdadeiro" : "falso", x, y, !((x < 5) || (y >= 7)) == 1 ? "verdadeiro" : "falso");

	scanf("%d%d%d", &a, &b, &g);
	printf("!(%d == %d) || !(%d != 5) é %s assim como !((%d == %d) && (%d != 5)) é %s\n", 
	a, b, g, (!(a == b) || !(g != 5) ) == 1 ? "verdadeiro" : "falso", a, b, g, !((a == b) && (g != 5)) == 1 ? "verdadeiro" : "falso");

	scanf("%d%d", &x, &y);
	printf("!((%d <= 8) && (%d > 4)) é %s assim como (!(%d <= 8) || !(%d >4)) é %s\n", 
	x, y, !((x <= 8) && (y > 4)) == 1 ? "verdadeiro" : "falso", x, y, (!(x <= 8) || !(y > 4)) == 1 ? "verdadeiro" : "falso"); 

	scanf("%d%d", &i, &j);
	printf("!((%d > 4) || (%d <= 6)) é %s assim como (!(%d > 4) && !(%d <= 6)) é %s\n",
	i, j, (!((i > 4) || (j <= 6))) == 1 ? "verdadeiro" : "falso", i, j, (!(i >4) && !(j <= 6)) == 1 ? "verdadeiro" : "falso");

	return 0;
}


